# Systems Infrastructure Lab: Final Graduation Rubric

This rubric defines the criteria for successful completion of the laboratory curriculum. Graduation requires a "Proficient" or "Expert" rating in every core competency across two project paths.

---

## 1. Architectural Integrity and Pattern Recognition
* **Expert:** Demonstrates deep understanding of RAII, thread-safety, and decoupled architecture. Code is modular and reusable.
* **Proficient:** Correctly implements required patterns (e.g., Singleton, Observer, Factory) with minimal architectural debt.
* **Developing:** Patterns are present but inconsistently applied; some logic is tightly coupled.

## 2. Systems Programming & Resource Management
* **Expert:** Zero memory leaks (verified via Valgrind/Sanitizers). Precise use of Smart Pointers in C++ and optimized heap usage in Java.
* **Proficient:** Effective manual and automatic memory management; handles system resources (sockets, file handles) correctly.
* **Developing:** Occasional resource leakage or inefficient allocation strategies.

## 3. Cryptographic and Security Rigor
* **Expert:** Correct implementation of SHA-256 hashing and RSA/ECDSA signing. Understands the difference between encryption and hashing in practice.
* **Proficient:** Successfully implements data integrity checks and basic secure key management.
* **Developing:** Fundamental cryptographic logic is present but lacks edge-case handling or secure storage practices.

## 4. Performance Optimization and Benchmarking
* **Expert:** Code is optimized for cache-efficiency (C++) and non-blocking I/O (Java). Benchmarking results meet or exceed industry expectations.
* **Proficient:** Logic is efficient with appropriate Big-O complexity for data structures.
* **Developing:** Functional code but lacks optimization for high-throughput or low-latency scenarios.

## 5. Professional Engineering Workflow
* **Expert:** Pull Requests are detailed, citing architectural decisions and performance metrics. Commit history is clean and atomic.
* **Proficient:** Consistent use of the PR template; documentation is kept in sync with code changes.
* **Developing:** Documentation is sparse; PR descriptions lack technical depth.

---

### Final Certification Requirements
To achieve the **"Systems Architecture Foundation"** certificate of completion:
1.  Complete atleast **2 Projects** to a "Proficient" level.
2.  Pass a **Final Code Review** for the Distributed Key-Value Store (Java) and NetScout Sniffer (C++).
3.  Maintain a **100% Documentation Coverage** rate across all repositories.

---
*Evaluated by the Project Coach & Systems Architecture Mentor*
