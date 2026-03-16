# Guide: How to Clone and Start the Systems-Infrastructure-Lab

Follow these steps to get the project files onto your computer and prepare for the **Distributed Key-Value Store** lab.

---

### Step 1: Install Git (If not already installed)
Before cloning, ensure you have Git installed. You can check by typing `git --version` in your terminal. If you don't have it, download it from [git-scm.com](https://git-scm.com/).

### Step 2: Open Your Terminal or Command Prompt
* **Windows:** Search for "PowerShell" or "Command Prompt".
* **Mac/Linux:** Open the "Terminal" app.

### Step 3: Clone the Repository
Copy and paste the following command into your terminal and press **Enter**:

```bash
git clone [https://github.com/saisravan909/Systems-Infrastructure-Lab.git](https://github.com/saisravan909/Systems-Infrastructure-Lab.git)
---

Step 4: Move Into the Project Folder
Once the download is finished, move your terminal's focus into the new folder:


cd Systems-Infrastructure-Lab

Step 5: Navigate to the Lab Module
Since you are working on the Distributed Key-Value Store, move into that specific directory:

cd 02-distributed-kv

Step 6: Verify Java is Installed
This project uses Java. Check if your environment is ready by running:

java -version
