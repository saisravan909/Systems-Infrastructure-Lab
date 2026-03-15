# Technical Standards and Architectural Conventions

This document defines the mandatory engineering standards for the Systems Infrastructure Lab. Adherence to these protocols is required for all contributions and will serve as the primary criteria during Merge Request (MR) reviews.

---

## 1. Programming Paradigms and Runtime Standards

### 1.1 C++ Engineering (Projects 01, 03, 05)
* **Standard Compliance:** All source code must conform to the **ISO C++17** standard or higher.
* **Memory Governance:** Manual memory management (raw `new`/`delete`) is discouraged. Use RAII (Resource Acquisition Is Initialization) and Smart Pointers (`std::unique_ptr`, `std::shared_ptr`) to ensure deterministic resource deallocation.
* **Standard Library:** Prioritize STL containers and algorithms to ensure code portability and efficiency.

### 1.2 Java Engineering (Projects 02, 03, 04)
* **Runtime Environment:** All modules must target **OpenJDK 17 (LTS)**.
* **Concurrency Model:** Utilize high-level abstractions from `java.util.concurrent` (e.g., `ExecutorService`, `CompletableFuture`) rather than raw `Thread` manipulation to ensure thread safety and scalability.
* **Type Safety:** Implement strong typing and avoid raw types to leverage the JVM’s compile-time safety checks.

---

## 2. Directory and Naming Conventions

### 2.1 Project Structure
Each project directory must maintain a strictly decoupled hierarchy:
* `/src`: Implementation source files.
* `/include` or `/docs`: Interface definitions, header files, and architectural diagrams.
* `/tests`: Unit and integration test suites.

### 2.2 Symbolic Naming
* **Types/Classes:** `PascalCase` (e.g., `NetworkScanner`, `ConsensusEngine`).
* **Methods/Variables:** `camelCase` (e.g., `executeCapture()`, `retryCount`).
* **Constants:** `SCREAMING_SNAKE_CASE` (e.g., `MAX_RETRY_LIMIT`).
* **Files:** Filenames must be descriptive and match the primary class or module they contain.

---

## 3. Documentation-as-Code (DaC)

Documentation is considered an integral part of the codebase.
* **Semantic Comments:** Use Doxygen (C++) or Javadoc (Java) for all public-facing interfaces. Comments should focus on the "Intent" and "Constraints" rather than repeating the code logic.
* **Decision Logs:** Significant architectural shifts or library choices must be documented in a local `ARCH_DECISIONS.md` file within the project directory.

---

## 4. Error Handling and Resilience

* **Fail-Fast Principle:** Systems must validate inputs at the boundary and terminate execution (or return a clear error state) immediately upon detecting invalid state.
* **Exceptions vs. Returns:** Use Exceptions for truly exceptional, non-recoverable system states. Use structured return types (e.g., `std::optional` in C++) for expected failure paths.
* **Logging:** Implement structured logging levels (INFO, WARN, ERROR) to facilitate post-mortem debugging.

---

## 5. Quality Assurance and Validation

* **Test Coverage:** No feature is considered complete without a corresponding unit test suite.
* **Static Analysis:** Ensure code passes basic linting and static analysis checks to maintain a high "Clean Code" score.
* **Performance Benchmarking:** For performance-critical modules (Projects 01 and 05), execution time and memory overhead metrics must be provided in the Merge Request notes.

---
*Authorized by the Systems Architecture Lead*
