# 02-Distributed Key-Value Store
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
