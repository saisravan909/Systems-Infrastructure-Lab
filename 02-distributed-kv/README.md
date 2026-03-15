# 02-Distributed Key-Value Store
## Scalable State Management and Consensus Logic

### Architectural Overview
This project involves the design of a distributed, networked storage engine. The focus is on ensuring data consistency and availability across multiple nodes, simulating the backbone of modern cloud-native infrastructure.

### Technical Requirements
* **Socket Architecture:** Implementation of a multi-threaded server using Java NIO for non-blocking I/O operations.
* **Concurrency Control:** Development of thread-safe mechanisms (Locks, Semaphores) to manage simultaneous read/write operations.
* **Protocol Design:** Definition of a custom binary or JSON-based serialization format for node-to-node communication.

### Engineering Objectives
* Resolve race conditions in a distributed environment.
* Implement a basic leader-follower or peer-to-peer discovery mechanism.
* Optimize data retrieval latency through efficient indexing.
