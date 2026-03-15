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

1.  **Identify Your Persona:** Select the path that corresponds most closely with your career interests.
2.  **Analyze the Core Features:** Navigate to the specific project directory and review the detailed requirements in the local README.
3.  **Conduct Technical Research:** Dedicate 30 minutes to researching the required stack (e.g., libpcap for C++ or Socket Channels for Java).
4.  **Initialize Development:** Follow the branching protocol in the Contribution Guide to create your workspace:
    `git checkout -b student-[your-name]-[project-name]`
