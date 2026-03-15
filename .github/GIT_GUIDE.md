# Git Lifecycle Guide: Phase 1 (Local Setup)

To begin contributing to the Systems Infrastructure Lab, you must initialize your local environment and establish your engineering identity.

---

## 1. Environment Initialization

Clone the master repository and enter the project root:

```bash
git clone [https://github.com/saisravan909/Systems-Infrastructure-Lab.git](https://github.com/saisravan909/Systems-Infrastructure-Lab.git)
cd Systems-Infrastructure-Lab
```
## 2. Establishing Engineering Identity

Every commit must be attributed to an authorized engineer. Configure your local Git identity using the commands below:

```bash
git config user.name "Your Full Name"
git config user.email "your.email@example.com"
```
> [!TIP]
> Use the same email address associated with your GitHub account to ensure your contributions are correctly linked to your profile.
---

## Phase 2: Branching & Atomic Commits

In a professional environment, we never commit directly to the `main` branch. We use isolated "Feature Branches" to develop and test new logic.

### 1. Create Your Feature Branch
Before writing any code, create a new branch using the standard naming convention:

```bash
# Syntax: student/[name]/[project-slug]
git checkout -b student/s-sravan/01-netscout
