# ⚙️ Diagnostic & Control Simulation System (C++)

A modular C++ project that simulates a **real-time diagnostic and control system**, similar to what is used in **mainframe and embedded environments** for monitoring system parameters.

---

## 🚀 Features
- Simulates multiple **sensors** (e.g., Temperature, Voltage, Memory Usage)
- Detects and logs **faults** when readings exceed thresholds
- Uses **Logger** to record timestamped events in `logs/system_log.txt`
- Designed with **Object-Oriented Programming** and **Clean Modular Architecture**
- Easily extendable to include more sensors or control logic

---

## 🧠 Modules Overview
| Module | Description |
|---------|-------------|
| **Logger** | Handles file-based logging with timestamps |
| **Sensor** | Simulates system parameter readings and detects faults |
| **Controller** | Integrates sensors with the logger, performs monitoring & corrective actions |
| **Main** | Runs simulation and coordinates all components |

---

## 🧩 Class Structure
main.cpp
├── Controller
│ ├── Logger
│ └── Sensor


---

## 🧪 How to Run
### 🔹 Compile (Windows PowerShell)
```powershell
g++ main.cpp sensor.cpp controller.cpp logger.cpp -o diagnostic_system.exe
.\diagnostic_system.exe

📂 Logs Output Example

Thu Oct 30 15:25:09 2025
 - ✅ Normal: Temperature | Value: 65.000000
Thu Oct 30 15:25:09 2025
 -  Fault detected in Voltage | Value: 112.000000
Thu Oct 30 15:25:09 2025
 - ✅ Normal: MemoryUsage | Value: 79.000000

🧰 Tools & Technologies

Language: C++
Concepts Used: OOPs, File Handling, STL, Randomization, Logging
Tools: VS Code, g++, Git

📈 Future Enhancements

Add multithreading for parallel sensor updates
Generate a summary report (fault count, uptime, efficiency)
Create a real-time dashboard using a simple UI or terminal graphics

👤 Author

Nilesh Pal
📧 nileshpal455@gmail.com

💻 GitHub: nileshpal455
