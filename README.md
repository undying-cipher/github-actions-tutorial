# github-actions-tutorial

GitHub Actions tutorial

This repository is based on **TechWorld with Nana's** GitHub Actions tutorial.
<https://www.youtube.com/watch?v=R8_veQiYBjI>

## GitHub Actions

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

## CI/CD Pipeline

Continuous Integration & Continuous Deployment pipelines commonly look similar to this:

1. Listen to code changes
2. Test the project's code
3. Build the project
4. Push the build artifacts to some system
5. Deploy the project to production

GitHub actions utilizes container technologies to provide compatibility with almost all kinds of projects.
