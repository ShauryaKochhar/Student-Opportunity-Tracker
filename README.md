# Student Opportunity Tracker

A C++ console-based application that helps students organize and manage opportunities such as hackathons, internships, workshops, courses, and competitions in one place.

## Problem Statement

Students often receive information about opportunities through multiple channels such as emails, WhatsApp groups, LinkedIn posts, community forums, and student societies. As a result, important opportunities can get lost among scattered notifications and messages.

The Student Opportunity Tracker provides a centralised solution that allows students to store, search, filter, and manage opportunities efficiently, ensuring that valuable opportunities are not missed.

---

## Features

* Add new opportunities
* View all available opportunities
* Search opportunities by name
* Delete opportunities
* Filter opportunities by category
* Sort opportunities alphabetically
* Track total number of opportunities
* Save opportunities to a file
* Automatically load saved opportunities when the application starts

---

## Technologies & Concepts Used

### Language

* C++

### Object-Oriented Programming (OOP)

* Classes
* Objects
* Encapsulation

### Data Structures

* Vector (Dynamic Array)

### Standard Template Library (STL)

* `vector`
* `sort()`

### File Handling

* `ifstream`
* `ofstream`

### Core Programming Concepts

* Functions
* Loops
* Conditional Statements
* Menu-Driven Programming
* CRUD Operations (Create, Read, Delete)
* Searching
* Sorting

---

## Project Structure

### Opportunity Class

Stores information about a single opportunity:

* Name
* Category
* Deadline

### OpportunityManager Class

Responsible for:

* Managing all opportunities
* Performing CRUD operations
* Handling file storage and retrieval
* Filtering and sorting data

---

## How It Works

1. User launches the application.
2. Existing opportunities are loaded from `opportunities.txt`.
3. User can add, search, view, delete, filter, or sort opportunities.
4. Data can be saved to a file for persistent storage.
5. Saved opportunities are automatically available during future runs.

---

## Getting Started

### Prerequisites

Make sure you have a C++ compiler installed.

Examples:

* GCC / G++
* MinGW (Windows)
* Clang

### Clone the Repository

```bash
git clone https://github.com/<your-username>/Student-Opportunity-Tracker.git
cd Student-Opportunity-Tracker
```

### Compile the Program

Using G++:

```bash
g++ main.cpp -o tracker
```

### Run the Program

#### Windows

```bash
tracker.exe
```

#### Linux / macOS

```bash
./tracker
```

### Data Storage

The application stores data in a file named `opportunities.txt`.

* If the file does not exist, it will be created automatically when data is saved.
* Previously saved opportunities are loaded automatically when the program starts.

---

## Sample Menu

```text
1. Add Opportunity
2. View Opportunities
3. Search Opportunity
4. Delete Opportunity
5. Filter By Category
6. Sort By Name
7. Total Opportunities
8. Save Data
9. Exit
```

---

## Future Improvements

* Priority Levels (High / Medium / Low)
* Application Status Tracking
* Deadline Reminder System
* Unique Opportunity IDs
* User Authentication
* Graphical User Interface (GUI)
* Web-Based Version with Database Integration

---

## Learning Outcomes

This project helped me strengthen my understanding of:

* Object-Oriented Programming
* STL Containers
* File Handling
* Searching and Sorting Techniques
* Data Persistence
* Designing Menu-Driven Applications
* Writing Modular and Maintainable Code

---

## Author

**Shaurya Kochhar**

Built as a practical solution to help students organise and track academic and professional opportunities efficiently.
