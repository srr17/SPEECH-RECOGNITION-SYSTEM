# Basic Speech Recognition System for Command-Based Control of Devices

## Project Information:
- **Name:** SOHAN RANE  
- **Company:** CODTECH IT SOLUTIONS PVT. LTD  
- **ID:** CT12DQD  
- **Domain:** Embedded Systems  
- **Duration:** December 12, 2024 – February 12, 2025  
- **Mentor:** Neela Santosh  

---

## Objective:
The main objective of this project was to build a basic speech recognition system that listens to predefined voice commands and controls devices such as LEDs, motors, or relays based on the recognized commands. By utilizing the **Arduino Uno Rev 4 WiFi**, the system takes advantage of the Wi-Fi capability to send audio data to a cloud-based speech recognition service. This allows the control of devices remotely through voice commands, making the system scalable and flexible.

---

## Key Components:

1. **Embedded Board:**
   - **Arduino Uno Rev 4 WiFi:** The central microcontroller used for interfacing with Wi-Fi and controlling devices based on recognized speech commands. Its Wi-Fi capabilities allow communication with cloud services for speech recognition.

2. **Microphone Module:**
   - **MAX9814 Microphone Module:** Used to capture audio input. This microphone can pick up sound effectively, making it suitable for basic speech recognition.

3. **Speech Recognition Software:**
   - **Google Speech-to-Text API** or **Dialogflow:** Since the Arduino Uno Rev 4 WiFi has limited computational power, the audio data captured by the microphone is sent to a cloud-based speech recognition service. The cloud processes the speech and returns the recognized command to the Arduino for device control.

4. **Output Devices:**
   - **LEDs**, **Motors**, or **Relays:** Used for controlling external devices. Depending on the recognized speech command, these devices can be switched on or off.

5. **Power Supply:**
   - **5V Power Supply:** Powered either through USB or an external battery pack for portability.

6. **Wi-Fi Network:**
   - A stable Wi-Fi connection is necessary for Arduino to send audio data to cloud services for recognition and processing.

---

## Key Activities:

### 1. **Setting Up the Hardware:**
   - **Arduino Uno Rev 4 WiFi:**
     - The **MAX9814 Microphone Module** is connected to an analog input pin or, in some configurations, digital pins for better performance.
     - External devices, such as **LEDs**, **Motors**, or **Relays**, are connected to the digital output pins of the Arduino to control the devices based on recognized commands.

   - **Wi-Fi Connectivity:**
     - The Arduino Uno Rev 4 WiFi is connected to a Wi-Fi network, allowing it to send the audio data to the cloud for speech recognition.

### 2. **Configuring Speech Recognition:**
   - **Cloud-Based Recognition (Google Speech API):**
     - The microphone captures audio data, which is sent over the internet to a cloud service like **Google Speech-to-Text API** or **Dialogflow** for processing. These services convert the audio to text, which is then interpreted to trigger specific commands.

   - **Arduino-based Recognition:**
     - Alternatively, using a voice recognition module like **Elechouse Voice Recognition Module V3**, the Arduino can recognize specific voice commands without needing an internet connection. Predefined commands are stored in the module, and the Arduino triggers appropriate actions based on local recognition.

### 3. **Coding and Programming:**
   - The Arduino code uses the **Wi-Fi101** or **WiFiNINA** library to establish Wi-Fi connectivity.
   - The program sends captured audio data to the cloud service and receives the interpreted commands.
   - The Arduino then controls connected devices based on the recognized commands. For example, if the voice command is "Turn on the light," the Arduino will turn on an LED.

### 4. **Testing and Calibration:**
   - The system is tested by giving different voice commands and verifying that the corresponding devices respond correctly. The microphone's sensitivity is also adjusted to ensure accurate voice capture.

### 5. **Error Handling and Feedback:**
   - The system provides feedback by blinking an LED to indicate when a command has been successfully recognized.
   - If no command is recognized or if there's an error, the system displays a failure message or shows error feedback with the LED.

---

## Technologies Used:

1. **Microcontroller:**
   - **Arduino Uno Rev 4 WiFi** for connecting to Wi-Fi and handling device control.

2. **Microphone Module:**
   - **MAX9814** microphone for capturing voice input.

3. **Speech Recognition:**
   - **Google Cloud Speech-to-Text API** for converting speech to text.
   - **Dialogflow** for processing and triggering actions based on speech input.

4. **Wi-Fi Communication:**
   - **Wi-Fi101** or **WiFiNINA** library for internet connectivity.

5. **Programming:**
   - **Arduino IDE** for writing and uploading code.
   - **Google Firebase** or **Dialogflow** for speech-to-text conversion.

6. **Output Devices:**
   - **LEDs**, **Motors**, or **Relays** for controlling actions.

---

## Learning Outcomes:
- Hands-on experience in cloud-based **speech recognition** and **IoT** communication.
- Learned how to integrate **Wi-Fi-enabled microcontrollers** with **speech recognition APIs** for remote device control.
- Gained skills in programming **voice-controlled automation** and troubleshooting communication delays.
- Improved understanding of **embedded systems** and how to optimize them for real-time applications.

---

## Troubleshooting:

- **No Response from the Microphone:** Ensure that the microphone module is correctly wired and properly powered.
- **Command Recognition Failure:** Check the Wi-Fi connection and ensure that the speech recognition API is properly configured.
- **Delayed Response:** This can be due to network latency; optimizing cloud services or using local recognition modules can help reduce delays.

---

## Conclusion:
This project demonstrates the feasibility of creating a basic speech recognition system on the **Arduino Uno Rev 4 WiFi** board, enabling command-based control of devices. It showcases the power of combining **IoT** technologies, **cloud-based speech recognition**, and **voice-controlled automation** to create an interactive system that can be expanded for more sophisticated use cases.
