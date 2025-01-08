#include <SPI.h>
#include <WiFi101.h>
#include <ArduinoHttpClient.h> // For HTTP communication

// Wi-Fi credentials
const char *ssid = "Realme Narzo 50 Pro"; // Replace with your Wi-Fi SSID
const char *password = "12345678";       // Replace with your Wi-Fi password

// Google Cloud Speech API details
const char *apiEndpoint = "speech.googleapis.com";
const char *apiPath = "/v1p1beta1/speech:recognize?key=YOUR_GOOGLE_CLOUD_API_KEY";

// Pins
const int ledPin = 13;

// WiFi client
WiFiClientSecure wifiClient; // For HTTPS communication
HttpClient httpClient = HttpClient(wifiClient, apiEndpoint, 443);

// Function prototypes
String recognizeSpeech();
void processCommand(String command);

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

  // Connect to Wi-Fi
  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to WiFi!");
}

void loop() {
  // Recognize speech and process the command
  String command = recognizeSpeech();
  if (!command.isEmpty()) {
    processCommand(command);
  }
  delay(5000); // Wait before the next iteration
}

String recognizeSpeech() {
  // Placeholder for sending audio data to Google Cloud and receiving the response.
  // You would implement audio recording and encoding here.

  // Example JSON request payload (replace with real audio data):
  String requestBody = R"({
    "config": {
      "encoding": "LINEAR16",
      "sampleRateHertz": 16000,
      "languageCode": "en-US"
    },
    "audio": {
      "content": "BASE64_ENCODED_AUDIO_DATA"
    }
  })";

  // Send HTTP POST request
  httpClient.beginRequest();
  httpClient.post(apiPath);
  httpClient.sendHeader("Content-Type", "application/json");
  httpClient.sendHeader("Content-Length", requestBody.length());
  httpClient.beginBody();
  httpClient.print(requestBody);
  httpClient.endRequest();

  // Get the response
  int statusCode = httpClient.responseStatusCode();
  String response = httpClient.responseBody();
  Serial.println("Response:");
  Serial.println(response);

  if (statusCode == 200) {
    // Parse the response to extract recognized text (JSON parsing required)
    // This example assumes "turn on light" is returned as a recognized command
    return "turn on light"; // Replace with actual parsing logic
  } else {
    Serial.println("Error: Failed to get valid response from API.");
    return "";
  }
}

void processCommand(String command) {
  if (command == "turn on light") {
    digitalWrite(ledPin, HIGH);
    Serial.println("LED turned ON");
  } else if (command == "turn off light") {
    digitalWrite(ledPin, LOW);
    Serial.println("LED turned OFF");
  } else {
    Serial.println("Command not recognized.");
  }
}
