# IoT-Based Air Pollution Monitoring System

## Sensors and Microcontrollers CA3 – Mini Project

---

## Introduction
Air pollution is a major environmental and public health issue affecting human health, ecosystems, and climate change. Rapid industrialization, urbanization, and the increase in vehicle emissions have worsened air quality, making continuous monitoring crucial. While air quality monitoring systems have always been useful, they are often expensive, difficult to operate, and limited to specific areas. 

The system can collect and send data on pollution levels to the cloud platform using the NodeMCU microcontroller and various gas sensors. This allows users to access data remotely and respond quickly to hazardous conditions. The goal is to develop an efficient, accessible model providing instant data, remote access, and real-time alerts against adverse environmental conditions.

## Literature Review / Background Study
Many studies have explored the use of IoT technologies for air quality monitoring, demonstrating their potential to replace traditional methods. Traditional cloud data storage relies on large, fixed data centers, which are expensive and require significant maintenance. IoT-based systems offer a more flexible, scalable, and cost-effective alternative by utilizing portable sensor-equipped devices with wireless communication.

### Key Research & Studies:
- **Patent US20180326391A1**: Describes an IoT system designed for rapid detection and monitoring of air pollution.
- **IEEE Xplore (A.S. Kumar & G. Narayanan)**: Focuses on affordability and real-time access in IoT-based air quality monitoring.

Despite advancements, existing IoT systems still face **limitations** such as:
- Limited usability
- Difficulty scaling to larger networks
- Challenges in real-time data analysis

This project aims to address these issues by integrating **NodeMCU** for an easy-to-deploy, scalable system enabling real-time data access and analysis through cloud integration.

## Problem Statement
Air pollution is a growing problem affecting both urban and rural populations worldwide. Air quality monitoring systems have always been limited by their **high cost, maintenance complexity, and installation costs**, making them inaccessible for many communities and organizations. 

Furthermore, manual data collection slows response times to pollution outbreaks. The solution proposed is an **affordable, easy-to-install, and efficient system** that provides continuous, real-time pollution data with remote monitoring, instant alerts, and long-term data storage for better environmental management.

## Objectives
1. **Develop an effective air quality monitoring model** using NodeMCU and gas sensors that can be deployed in multiple locations.
2. **Enable real-time data transmission** to cloud platforms via Wi-Fi, allowing remote access through web or mobile interfaces.
3. **Provide an expandable solution** that allows adding new sensors and adapting to different environmental conditions.
4. **Implement instant alert mechanisms** to notify users when pollution levels exceed safety thresholds.
5. **Ensure continuous data collection** for long-term analysis, aiding policymaking and environmental management.

## Design and Implementation
### **System Architecture**
1. **NodeMCU Microcontroller**: The core of the system, responsible for processing sensor data and managing Wi-Fi communication.
2. **Gas Sensors (MQ135)**: Detects pollutants such as **carbon monoxide (CO), nitrogen dioxide (NO2), and smoke**.
3. **Wi-Fi Module (Integrated in NodeMCU)**: Supports wireless communication, enabling real-time cloud data transmission.
4. **Cloud Platform**: Stores and displays data remotely, enabling access via web applications or smartphones.
5. **Optional LCD Display**: Provides **on-site, real-time air quality readings**.

### **Design Specifications & Workflow**
- Sensors collect air quality data and send it to the NodeMCU.
- NodeMCU processes the data and transmits it to the cloud.
- Cloud platforms allow users to monitor real-time air quality data.
- Alerts are triggered if pollution levels exceed **predefined safety thresholds**.
- The system continuously monitors air quality, logging data for analysis.

## Results and Discussion
### **System Performance**
The IoT-based air pollution monitoring system was successfully tested and demonstrated:
- **Lower cost** compared to commercial air quality monitors.
- **Scalability**, allowing easy integration of additional sensors.
- **Remote access** via web interfaces, enabling real-time monitoring.

These results confirm the system’s effectiveness in providing a **low-cost, scalable, and user-friendly** air quality monitoring solution.

## Future Scope
The project has significant potential for future enhancements, including:
1. **Integration of AI/ML algorithms** to predict air quality trends and automate pollution alerts.
2. **GPS-based mobile units** for dynamic air quality mapping.
3. **Battery-operated or solar-powered versions** for remote area deployment.
4. **Expansion with additional sensors** (e.g., PM2.5, PM10, SO2, and O3) for more comprehensive air quality assessment.
5. **Integration with Smart City frameworks**, allowing real-time pollution data access for government agencies and policymakers.

## References
1. **A. S. Kumar & G. Narayanan** - "IoT-Based Air Pollution Monitoring System," IEEE Xplore, 2019.
2. **US20180326391A1** - "IoT Based Air Pollution Monitoring System," University of California, 2018.
3. **Circuit Digest** - "IoT-Based Air Pollution Monitoring System using Arduino," 2020.
4. **J. M. Brown et al.** - "Advances in Low-Cost Air Quality Monitoring Devices," Journal of Environmental Monitoring, 2020.
5. **M. Singh & P. Singh** - "Development of Smart Air Quality Monitoring Systems Using IoT," International Journal of Computer Applications, 2018.
6. **W. He, J. Li, & T. Chen** - "Real-Time Air Quality Monitoring System Using Wireless Sensor Networks," Sensors, 2019.
7. **T. Kim, K. Park, & J. Yoon** - "Portable IoT-Based Air Quality Monitoring System," IEEE Transactions on Instrumentation & Measurement, 2019.
8. **L. Yang & S. Tan** - "Urban Air Quality Monitoring System Based on IoT," IEEE Access, 2019.
9. **M. Li, X. Zhang, & Y. Chen** - "Cloud-Based IoT System for Monitoring Urban Air Quality," Environmental Science & Technology, 2021.
10. **N. Kularatna & B. Sudantha** - "Advanced Air Quality Monitoring Using Low-Cost Gas Sensors," IEEE Transactions on Industrial Electronics, 2020.

---