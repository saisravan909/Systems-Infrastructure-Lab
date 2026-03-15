# 01-NetScout Sniffer
## Low-Level Network Analysis and Packet Inspection

### Architectural Overview
NetScout is a high-performance network analysis tool designed to interface directly with the data link layer. By bypassing standard application-level networking, this project focuses on the manual deconstruction of protocol headers and the management of raw packet streams.

### Technical Requirements
* **Packet Capture Engine:** Implementation of a capture loop using the `libpcap` library to interface with network hardware.
* **Protocol Deconstruction:** Manual parsing of Ethernet, IP, and TCP/UDP headers using bit-masking and C++ structures.
* **Memory Constraints:** Efficient buffer management to handle high-traffic throughput without packet loss or memory exhaustion.

### Engineering Objectives
* Interface with kernel-level packet filters.
* Develop a robust understanding of bit-order (Endianness) in network communication.
* Implement real-time data filtering logic at the byte level.
