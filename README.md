# Student Portal

Legacy student portal modernization project.

The project is being rebuilt to improve maintainability, module separation, and the development workflow.

## Overview

Student Portal is a command-line application designed to modernize a legacy student management system.

The application focuses on:

- Authentication
- Student profiles
- Dashboard management
- User settings

## Setup

Clone the repository:

```bash
git clone https://github.com/Neelesh-Srivastava435/student-portal.git
```

Move into the project directory:

```bash
cd student-portal
```


## Repository Structure

```text
student-portal
├── app
├── engine
├── features
├── include
├── data
├── docs
├── scripts
└── tests
```

## Build

Compile the project:

```bash
g++ engine/*.cpp features/**/*.cpp -o portal
```