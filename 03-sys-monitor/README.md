# 03-System Resource Monitor
## Cross-Language Systems Integration and Data Pipelines

### Architectural Overview
Sys-Monitor is a hybrid application that bridges the gap between hardware-level telemetry and high-level data visualization. It utilizes a C++ backend for resource extraction and a Java frontend for state representation.

### Technical Requirements
* **Native Extraction:** Development of a C++ core to query OS-level APIs (procfs on Linux or WinAPI) for CPU and Memory metrics.
* **JNI/Socket Bridge:** Implementation of a robust data pipeline to transfer system metrics from native code to the JVM.
* **Visualization Engine:** A structured Java application to process and display real-time telemetry data.

### Engineering Objectives
* Master the integration of disparate memory models (Manual vs. Garbage Collected).
* Design a low-overhead telemetry polling cycle.
* Ensure cross-platform compatibility for system-level calls.
