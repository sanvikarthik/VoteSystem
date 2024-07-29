# 🗳️ Voting System with File Encryption

This is a C program for an online voting system. It includes a main function and several helper functions to handle user authentication, voting, and file encryption.

## 🚀 Features

- **User Authentication**: Users must enter a username and password to access the voting system.
- **Admin Access**: Special credentials (`admin/admin123`) decrypt the data file for viewing.
- **Voting System**: Users can vote for candidates if they are eligible.
- **Single Vote Per User**: Ensures that each user can only vote once.
- **File Encryption**: Vote results are written to a file and encrypted for security.

## 📜 Function Overview

### 1. `main()`

- **Entry Point**: Prompts the user for their username and password.
- **Access Control**: Allows voting or exits based on credentials.
- **Vote Recording**: Records votes and updates the voter record.
- **Results Handling**: Writes vote results to a file and encrypts it.

### 2. `register_voters()`

- **Initialization**: Initializes the voters array with dummy data.

### 3. `check_eligibility(char *id)`

- **Eligibility Check**: Verifies if the voter with the given ID can vote. Returns `1` if eligible, `0` otherwise.

### 4. `update_voter_record(char *id)`

- **Voter Record Update**: Marks the voter with the given ID as having voted.

### 5. `record_vote(int option, int *vote_counts)`

- **Vote Recording**: Records the vote for the selected candidate and updates vote counts.

### 6. `write_results_to_file(int *vote_counts)`

- **Result Writing**: Writes vote counts to a file named `results.txt`.

### 7. `encryptDecryptFile(int mode)`

- **File Encryption/Decryption**: Encrypts or decrypts the `results.txt` file using a bitwise XOR operation with a predefined key.

## 🔧 Installation

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/voting-system.git
2. Navigate to the project directory:
   ```bash
    cd voting-system
3.Compile the program:
   ```bash
      gcc main.c -o voting_system
