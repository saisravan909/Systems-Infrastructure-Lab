# Engineering Path Selection

Select a specialization that aligns with your technical objectives. Each path requires mastery of specific toolchains and architectural patterns.

| Path | Focus | Primary Tech | Complexity |
| :--- | :--- | :--- | :--- |
| **Security & Stealth** | Packet Inspection | C++ | High |
| **Architect & Scalability** | Distributed Systems | Java | Medium |
| **Full-System Builder** | JNI & Telemetry | C++ / Java | High |
| **Trust & Cryptography** | Immutable Ledgers | Java | Medium |
| **Speed & Logic** | Quantitative Backtesting | C++ | Extreme |


# Project Selection & Roadmaps

This laboratory offers these distinct engineering paths. Each path is designed to challenge your architectural thinking and technical precision. Review the personas below to identify which specialization aligns with your current objectives.

---

## 1. Security and Stealth
**Core Project:** 01-netscout-sniffer (C++)

* **Target Persona:** Individuals interested in network security, protocol analysis, and the mechanics of traffic interception or firewall logic.
* **The Challenge:** Direct manipulation of raw bits and bytes. Without a memory management "safety net," manual resource allocation in C++ is paramount to prevent system crashes.
* **The Objective:** Gain a deep understanding of the OSI model by capturing and deconstructing Ethernet frames in real-time.

---

## 2. Architecture and Scalability
**Core Project:** 02-distributed-kv (Java)

* **Target Persona:** Individuals focused on high-availability systems and how enterprise-scale platforms like Netflix or Google manage data across global clusters.
* **The Challenge:** Managing concurrency. You must resolve the technical conflicts that arise when multiple entities attempt to modify the same data point simultaneously.
* **The Objective:** Master Java networking and the underlying distributed logic that powers modern cloud databases.

---

## 3. Full-System Integration
**Core Project:** 03-sys-monitor (C++ and Java)

* **Target Persona:** Individuals who want to bridge the gap between low-level hardware interaction and high-level user interface design.
* **The Challenge:** Cross-language communication. You must design efficient data pipelines to allow C++ (system level) and Java (application level) to exchange information seamlessly.
* **The Objective:** Deliver a unified product that demonstrates the ability to manage a complex, multi-language technical stack.

---

## 4. Integrity and Cryptography
**Core Project:** 04-credential-chain (Java)

* **Target Persona:** Individuals concerned with digital identity, privacy, and the mathematical proof of data authenticity in an era of digital misinformation.
* **The Challenge:** Implementing cryptographic hashing and key management to ensure data remains immutable and verifiable.
* **The Objective:** Move beyond the hype of digital currency to build a functional, practical tool for enterprise data integrity.

---

## 5. Performance and Algorithmic Logic
**Core Project:** 05-algo-backtester (C++)

* **Target Persona:** Individuals motivated by mathematical optimization, statistics, and high-frequency environments where millisecond latency is unacceptable.
* **The Challenge:** Processing millions of data points with maximum efficiency using highly optimized C++ algorithms.
* **The Objective:** Produce "production-grade" code optimized for extreme speed, a critical requirement for quantitative finance and data science.

---
## Execution Framework: The First 60 Minutes

The transition from observer to contributor happens in the first hour. Follow this high-velocity onboarding sequence to initialize your environment.

### 00-15 min: Strategic Alignment
* **Identify Your Persona:** Select the path from the table above that aligns with your technical objectives.
* **Log Intent:** Open a new **Issue** in the GitHub tracker titled `Project Initialization: [Project Name]`. Apply the `Status: Discovery` and `Priority: Standard` labels.

### 15-45 min: Deep Technical Audit
* **Requirement Analysis:** Navigate to the project directory (e.g., `/01-netscout-sniffer`) and perform a line-by-line audit of the local `README.md`.
* **Stack Research:** Dedicate 30 minutes to researching the core dependencies.
    * *Security Path:* Focus on `libpcap` and raw socket structures in C++.
    * *Architect Path:* Focus on `java.nio.channels` and Selector patterns.

### 45-60 min: Infrastructure Initialization
* **Branching Protocol:** Create your isolated workspace using the professional naming convention:
    ```bash
    git checkout -b student/[your-name]/[project-path]
    ```
* **Environment Validation:** Compile the "Hello World" or boilerplate provided in the directory to ensure your toolchain (GCC/OpenJDK) is configured correctly.
* **Sync:** Push your empty branch to the origin to confirm connectivity:
    ```bash
    git push origin student/[your-name]/[project-path]
    ```
---
> [!TIP]
> **Stuck?** Do not struggle in silence. Post a technical blocker in the comments of your Initialization Issue and tag the @mentor for architectural guidance.
