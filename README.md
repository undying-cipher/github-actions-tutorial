# GitHub Actions Tutorial

GitHub Actions tutorial

This repository is based on [**TechWorld with Nana's** GitHub Actions tutorial](https://www.youtube.com/watch?v=R8_veQiYBjI).

![DevOpsDots](https://github.com/user-attachments/assets/367a9b0e-8d4a-4f20-a27d-c9cbeb9f5f4a)

## C++23 CBA Sample Project
The sample is a simple program using component-based-architecture (CBA).
The goal is to automatically build (CMake), test (GTest), and deploy (GitHub releases) this C++ sample project.

![image](https://github.com/user-attachments/assets/1b25baf7-dbeb-4a75-8be9-49fc179ac6f7)


## Introduction — GitHub Actions

GitHub Actions is a platform for automating developer workflows.
These can be anything from CI/CD workflows to repository synchronization.
GitHub Actions was designed for developers and neatly integrates with your project's source code right here on GitHub.

### 1. Listen to Events

Actions can be triggered through events such as:

- Creation of pull requests
- Creation of issues
- Contributors join the project
- Merge of pull requests

### 2. Trigger Workflow

Predefined actions are then executed in response to predefined events.

Learn more: <https://github.com/features/actions>

## What are CI/CD Pipelines?

Continuous Integration & Continuous Deployment pipelines commonly look similar to this:

1. Listen to code changes
2. Test the project's code
3. Build the project
4. Push the build artifacts to some system
5. Deploy the project to production

GitHub actions utilizes container technologies to provide compatibility with almost all kinds of projects.

## What are Matrix Strategies?

Matrix strategies allow for variations of jobs.
They can be used for similar builds with differing build targets for example.

<https://docs.github.com/en/actions/writing-workflows/choosing-what-your-workflow-does/running-variations-of-jobs-in-a-workflow>
