# Git Lifecycle Guide: Phase 1: Local Setup

To begin contributing to the **Systems Infrastructure Lab**, you must initialize your local environment and establish your engineering identity.

---

## 1. Environment Initialization

Clone the master repository and enter the project root:

```bash
git clone https://github.com/saisravan909/Systems-Infrastructure-Lab.git
cd Systems-Infrastructure-Lab
```

---

## 2. Establishing Engineering Identity

Every commit must be attributed to an authorized engineer. Configure your local Git identity using the commands below:

```bash
git config user.name "Your Full Name"
git config user.email "your.email@example.com"
```

> [!TIP]
> Use the same email address associated with your GitHub account to ensure your contributions are correctly linked to your profile.

---

# Git Lifecycle Guide: Phase 2: Branching & Atomic Commits

In a professional engineering environment, we **never commit directly to the `main` branch**. All development occurs in isolated **feature branches** to ensure stability, traceability, and clean integration workflows.

---

## 1. Create Your Feature Branch

Before writing any code, create a new branch using the standard naming convention:

```bash
# Syntax
student/[name]/[project-slug]

# Example
git checkout -b student/s-sravan/01-netscout
```

This creates a dedicated workspace for your feature without affecting the primary codebase.

---

## 2. Stage Your Changes

Once you have implemented your feature or update, stage the modified files:

```bash
git add .
```

This prepares your changes for the next commit.

---

## 3. Create an Atomic Commit

Commit your changes using a **structured commit message**.

```bash
git commit -m "feat: implement basic packet capture loop"
```

Use standardized prefixes:

| Prefix | Purpose |
|------|------|
| `feat` | New feature implementation |
| `fix` | Bug fixes |
| `docs` | Documentation updates |
| `refactor` | Code restructuring without changing behavior |
| `test` | Adding or improving tests |
| `chore` | Maintenance tasks |

---

> [!NOTE]
> An **Atomic Commit** means that **one commit represents one logical change**. Avoid large "mega-commits" that modify many unrelated files at once. Atomic commits make debugging, code review, and rollback significantly easier.

---

# Git Lifecycle Guide: Phase 3: Integration (Future Phase)

Once your feature branch is complete, the next steps typically involve:

1. Pushing the branch to the remote repository
2. Opening a Pull Request
3. Code review and validation
4. Merge into the `main` branch

These steps will be covered in the **Advanced Git Workflow Guide**.

---

## Engineering Philosophy

The Systems Infrastructure Lab follows professional software engineering practices designed for **enterprise-grade systems development**. These workflows emphasize:

- Traceable development history
- Isolated feature development
- Secure and stable integration pipelines
- Clear authorship and accountability

Maintaining disciplined Git practices ensures that the repository remains **scalable, auditable, and production-ready**.

