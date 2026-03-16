# 02-Distributed Key-Value Store

Goal: Build a mini distributed storage system similar to Redis or DynamoDB.
## Distributed Cluster Architecture

```mermaid
flowchart LR

ClientA[Client]
ClientB[Client]
ClientC[Client]

LB[Request Router]

Node1[KV Node 1]
Node2[KV Node 2]
Node3[KV Node 3]

Storage1[(Local Store)]
Storage2[(Local Store)]
Storage3[(Local Store)]

ClientA --> LB
ClientB --> LB
ClientC --> LB

LB --> Node1
LB --> Node2
LB --> Node3

Node1 --> Storage1
Node2 --> Storage2
Node3 --> Storage3

Node1 <-->|Replicate| Node2
Node2 <-->|Replicate| Node3
Node3 <-->|Replicate| Node1
```
## Scalable State Management and Consensus Logic

### Architectural Overview
This project involves designing a distributed, networked storage engine. The focus is on ensuring data consistency and availability across multiple nodes, simulating the backbone of modern cloud-native infrastructure.

### Technical Requirements
* **Socket Architecture:** Implementation of a multi-threaded server using Java NIO for non-blocking I/O operations.
* **Concurrency Control:** Development of thread-safe mechanisms (Locks, Semaphores) to manage simultaneous read/write operations.
* **Protocol Design:** Definition of a custom binary or JSON-based serialization format for node-to-node communication.

### Engineering Objectives
* Resolve race conditions in a distributed environment.
* Implement a basic leader-follower or peer-to-peer discovery mechanism.
* Optimize data retrieval latency through efficient indexing.
## System Architecture
---

# Conceptual Understanding

Before building the system, it is important to understand **what problem a Distributed Key-Value Store solves**.

Think of it as a **shared memory system spread across multiple computers**.

Instead of storing data in one machine, the data is **distributed across many nodes**, allowing systems to be **scalable, fault tolerant, and fast**.

---

# Day-to-Day Analogy

Imagine a **university library system**.

Each library branch contains shelves with books.

Every book has:
- a **catalog ID** (the key)
- the **book information** (the value)

Example:

```
Key:   CS101
Value: "Introduction to Computer Systems"
```

Now imagine the university has **multiple libraries across campus**.

Students should be able to:

• search for a book  
• borrow a book  
• update availability  

from **any library location**.

To make this work:

- libraries must **communicate with each other**
- they must **agree on which library holds which book**
- they must **keep records synchronized**

Your project works the same way.

Each **server node** acts like a **library branch**.

The system must ensure that:

- data can be stored
- data can be retrieved
- nodes can coordinate with each other
- information stays consistent across the network

---

# Industry Example

Modern technology companies rely heavily on **distributed key-value systems**.

Examples include:

- **User session storage**
- **configuration services**
- **large-scale caching systems**
- **distributed databases**

For example:

When you log into a large online service, your login session might be stored like this:

```
Key:   session_847293
Value: { user: "alice", login_time: "12:01PM", permissions: "standard" }
```

That data must be accessible **from multiple servers** handling millions of requests.

If one server crashes, another server must still be able to retrieve that session.

This is why systems distribute data across **multiple nodes**.

Large-scale platforms use systems similar to this project, such as:

- distributed caches
- coordination services
- configuration stores
- metadata services

Your project simulates the **core infrastructure behind these systems**.

---

# What You Are Building

In this project you will create a **simplified distributed storage engine**.

Your system will:

1. Start a server node
2. Accept network connections
3. Store key-value data
4. Handle multiple concurrent clients
5. Communicate with other nodes
6. Maintain consistent state across the system

Each server will act as a **node in a distributed cluster**.

---

# What To Do Next

Follow these steps to begin building the system.

### Step 1 — Start the Server Node

You already have the starting point:

```
Server.java
```

Your first task is to create a **network server using Java NIO** that listens for incoming client requests.

---

### Step 2 — Implement Request Handling

Your server should support basic operations:

```
PUT key value
GET key
DELETE key
```

Example interaction:

```
PUT user1 Alice
GET user1
DELETE user1
```

---

### Step 3 — Add Thread Safety

Multiple clients may connect at the same time.

You must ensure your storage system is **thread-safe**.

Possible approaches:

- synchronized structures
- locks
- concurrent hash maps

---

### Step 4 — Node Communication

The next stage is enabling **node-to-node communication**.

Servers should be able to:

- share updates
- replicate data
- discover other nodes

This simulates a **distributed cluster**.

---

# Engineering Goal

By the end of this project you will have built a **mini distributed storage system**, similar in architecture to the systems used in modern infrastructure platforms.

The purpose is not just to build code, but to understand:

- distributed system coordination
- data consistency
- concurrent processing
- scalable backend architecture

These are core skills required to design **large-scale infrastructure systems**.

Client
  │
  ▼
Node A  ── Node B ── Node C
  │
Distributed Key-Value Storage

## System Architecture
```mermaid
flowchart LR

Client1[Client Application]
Client2[Client Application]
Client3[Client Application]

NodeA[Node A]
NodeB[Node B]
NodeC[Node C]

Store[(Distributed Key-Value Data)]

Client1 --> NodeA
Client2 --> NodeB
Client3 --> NodeC

NodeA <-->|Replication| NodeB
NodeB <-->|Replication| NodeC
NodeC <-->|Replication| NodeA

NodeA --> Store
NodeB --> Store
NodeC --> Store
```
## Client Request Flow

```mermaid
sequenceDiagram

participant Client
participant Node
participant Storage

Client->>Node: PUT key value
Node->>Storage: Store key/value
Storage-->>Node: Success
Node-->>Client: OK

Client->>Node: GET key
Node->>Storage: Lookup key
Storage-->>Node: Return value
Node-->>Client: value
```
## Node Replication Model

```mermaid
flowchart LR

A[Node A]
B[Node B]
C[Node C]

A -->|Replicate Data| B
B -->|Replicate Data| C
C -->|Replicate Data| A

A -->|Heartbeat| B
B -->|Heartbeat| C
C -->|Heartbeat| A
```
## Node Internal Architecture

```mermaid
flowchart TD

Listener[Network Listener : Java NIO]

Parser[Request Parser]

Store[Key-Value Storage]

Concurrency[Concurrency Control]

Replication[Replication Engine]

Listener --> Parser
Parser --> Store
Store --> Concurrency
Store --> Replication
Replication --> Listener
```
## Project Development Roadmap

```mermaid
flowchart LR

Step1[Start Server Node]

Step2[Accept Client Connections]

Step3[Implement PUT GET DELETE]

Step4[Add Thread Safety]

Step5[Add Node Discovery]

Step6[Implement Replication]

Step7[Optimize Performance]

Step1 --> Step2 --> Step3 --> Step4 --> Step5 --> Step6 --> Step7
```
## Real-World Infrastructure Analogy

```mermaid
flowchart LR

Users[Millions of Users]

LoadBalancer[Load Balancer]

ServerA[Backend Server A]
ServerB[Backend Server B]
ServerC[Backend Server C]

DistributedDB[(Distributed Key-Value Store)]

Users --> LoadBalancer
LoadBalancer --> ServerA
LoadBalancer --> ServerB
LoadBalancer --> ServerC

ServerA --> DistributedDB
ServerB --> DistributedDB
ServerC --> DistributedDB
```
## Key-Value Data Model

```mermaid
flowchart TD

Key1["Key: user123"]
Value1["Value: {name: Alice, role: admin}"]

Key2["Key: session847"]
Value2["Value: {login: 12:01PM, status: active}"]

Key3["Key: order552"]
Value3["Value: {item: laptop, status: shipped}"]

Key1 --> Value1
Key2 --> Value2
Key3 --> Value3
```
## Data Partitioning Across Nodes

```mermaid
flowchart LR

KeyA["Key: user1"]
KeyB["Key: user2"]
KeyC["Key: user3"]

Node1[Node A]
Node2[Node B]
Node3[Node C]

KeyA --> Node1
KeyB --> Node2
KeyC --> Node3
```
## Node Replication Process

```mermaid
sequenceDiagram

participant NodeA
participant NodeB
participant NodeC

NodeA->>NodeB: Replicate PUT(key,value)
NodeB-->>NodeA: ACK

NodeA->>NodeC: Replicate PUT(key,value)
NodeC-->>NodeA: ACK
```
## Client Command Flow

```mermaid
flowchart LR

Client -->|PUT user1 Alice| Node
Node --> Storage

Client -->|GET user1| Node
Node --> Storage
Storage --> Node
Node --> Client
```
## Server Node Internal Components

```mermaid
flowchart TD

Network[Network Listener]
Parser[Command Parser]
Storage[Key Value Map]
Threading[Concurrency Control]
Replication[Cluster Replication]

Network --> Parser
Parser --> Storage
Storage --> Threading
Storage --> Replication
```
## Project Implementation Roadmap

```mermaid
flowchart LR

Step1[Start Java Server]
Step2[Accept TCP Connections]
Step3[Parse Commands]
Step4[Implement Key Value Storage]
Step5[Handle Concurrent Clients]
Step6[Add Node Communication]
Step7[Implement Replication]
Step8[Optimize Performance]

Step1 --> Step2 --> Step3 --> Step4 --> Step5 --> Step6 --> Step7 --> Step8
```

# Systems Infrastructure Laboratory – Student Guide

## 1️⃣ Mapping Components to Code Responsibilities

This maps directly to the code that must be written. Each component corresponds to a key part of the system:

| **Component**        | **Code Responsibility**                        | ** Hint / Example** |
|----------------------|-----------------------------------------------|--------------------|
| <span style="color:#ff6f61;">Network Listener</span> | Java NIO server                               | Use `ServerSocketChannel` to accept multiple clients. |
| <span style="color:#6f4fff;">Parser</span>           | Parse PUT/GET commands                        | Split input strings and validate commands. |
| <span style="color:#f4d03f;">Storage</span>          | HashMap or ConcurrentHashMap                  | `ConcurrentHashMap` is safer for multi-threaded access. |
| <span style="color:#1abc9c;">Threading</span>        | Multi-client handling                          | Consider `ExecutorService` for managing threads. |
| <span style="color:#e67e22;">Replication</span>      | Node communication                             | Use sockets or REST APIs to sync data between nodes. |

> 🔹 **Pro Tip:** Think of this as the **blueprint** — each row is a mini-project in itself!  

---

## 2️⃣ How This Connects to Real Systems

Students love seeing industry relevance. Large systems use similar architectures. Your project is a mini version of these systems:

| **System**             | **Use Case**                     | **Why it Matters** |
|------------------------|---------------------------------|------------------|
| <span style="color:#ff6f61;">Redis</span>                  | Distributed caching             | Fast retrieval of frequently accessed data |
| <span style="color:#6f4fff;">Apache Cassandra</span>       | Massive distributed databases   | Handles huge volumes of data reliably |
| <span style="color:#1abc9c;">Amazon DynamoDB</span>        | Large-scale key-value storage   | Scales automatically for high traffic |

> 🔹 **Pro Tip:** Think of your project as a **hands-on mini version** of these enterprise systems!  

---

## 3️⃣ Visual Diagram of System Architecture

- <span style="color:#ff6f61;">**Network Listener:**</span> Handles incoming client requests.  
- <span style="color:#6f4fff;">**Parser:**</span> Processes PUT/GET commands.  
- <span style="color:#f4d03f;">**Storage:**</span> Stores data using HashMap/ConcurrentHashMap.  
- <span style="color:#1abc9c;">**Threading:**</span> Enables handling of multiple clients simultaneously.  
- <span style="color:#e67e22;">**Replication:**</span> Synchronizes data with other nodes.  

> 🔹 **Pro Tip:** Use this diagram as your **roadmap** — it’s the visual equivalent of your project’s backbone!

---

###  Quick Takeaways

1. Each component in your project maps to a real-world system component.  
2. Multi-threading and replication are critical for real systems — now you get to implement them!  
3. This mini project mirrors industry-scale architectures like Redis, Cassandra, and DynamoDB.  

> **Challenge:** Try to trace a PUT or GET request from the **Network Listener** all the way to **Replication** — that’s how real distributed systems work!

