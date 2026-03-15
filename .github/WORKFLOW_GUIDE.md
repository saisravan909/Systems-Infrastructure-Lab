# Repository Workflow and Project Management

To maintain a high-velocity development environment, this laboratory utilizes a professional-grade project management system via GitHub Issues and Labels. This system provides immediate visual feedback on the state and priority of all engineering tasks.

---

## 1. Project Management Protocol

Every project path begins and ends with an Issue. This ensures that all technical efforts are tracked, documented, and officially certified upon completion.

### Step-by-Step Lifecycle
1.  **Initialization:** Create a new **Issue** for your selected project (e.g., *Phase 1: Implement 01-NetScout Sniffer Core*).
2.  **Labeling:** Apply the `Status: Discovery` and `Priority: Standard` labels immediately.
3.  **Active Development:** As you transition from research to implementation, update the label to `Status: Development`.
4.  **Architectural Review:** When you submit a Merge Request, update the label to `Status: Review`.
5.  **Certification:** Once the Merge Request is approved and the code meets all rubric standards, apply the `Status: Certified` label and close the issue.

---

## 2. The "Industry Standard" Label Set

The following labels define the current health and progress of your engineering efforts:

| Label Name |Description |
| :--- | :--- |
| **Status: Discovery** | Researching technical requirements and documentation. |
| **Status: Development** |  Active implementation and coding in progress. |
| **Status: Review** | Code complete; awaiting architect feedback on Merge Request. |
| **Status: Certified** | Project meets all rubric criteria and is officially completed. |
| **Priority: Critical** | Immediate attention required for core architectural blockers. |
| **Priority: Standard** | Regular project progression. |
| **Type: Refactor** | Improving existing code quality or performance logic. |
| **Type: Environment** | Tasks related to local setup, compilers, or IDE configuration. |

---

## 3. Communication Standards

* **Issue Comments:** Use the comment section of an Issue to document technical hurdles or specific breakthroughs encountered during the `Status: Development` phase.
* **Label Accuracy:** Ensure your labels always reflect the true state of your local repository. This is a core requirement for professional engineering transparency.

---
*Authorized by the Systems Architecture Lead*
