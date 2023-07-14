#include <bits/stdc++.h>
#include <fstream>

using namespace std;

void saveTasksToFile(const vector<string>& tasks) {
    ofstream outputFile("tasks.txt");
    if (outputFile.is_open()) {
        for (const string& task : tasks) {
            outputFile << task << endl;
        }

        outputFile.close();
        cout << "Tasks saved to file." << endl;
    } else {
        cout << "Unable to save tasks to file." << endl;
    }
}

void loadTasksFromFile(vector<string>& tasks) {
    ifstream inputFile("tasks.txt");
    if (inputFile.is_open()) {
        string task;
        while (getline(inputFile, task)) {
            tasks.push_back(task);
        }
        inputFile.close();
        cout << "Tasks loaded from file." << endl;
    } else {
        cout << "No tasks file found. Starting with an empty list." << endl;
    }
}

int main() {

    vector<string> tasks;

    // Load tasks from file
    loadTasksFromFile(tasks);

    while (true) {
        int choice;

        cout << "***** To-Do List *****" << endl;
        cout << "1. Add task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Mark task as completed" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice betweemn (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string task;
                cout << "Enter the task: ";
                cin.ignore(); // Ignore any remaining newline character
                getline(cin, task);
                tasks.push_back(task);
                cout << "Task added successfully." << endl;
                break;
            }
            case 2: {
                if (tasks.empty()) {
                    cout << "No tasks found. Your tasks are empty." << endl;
                } else {
                    cout << "Tasks: " << endl;
                    for (const auto& task : tasks) {
                        cout << "- " << task << endl;
                    }
                }
                break;
            }
            case 3: {
                if (tasks.empty()) {
                    cout << "No tasks found. Your tasks are empty." << endl;
                } else {
                    cout << "Mark task as completed (Enter the task number): ";
                    int taskNumber;
                    cin >> taskNumber;

                    if (taskNumber >= 1 && taskNumber <= tasks.size()) {
                        tasks.erase(tasks.begin() + taskNumber - 1);
                        cout << "Task marked as completed." << endl;
                    } else {
                        cout << "Invalid task number." << endl;
                    }
                }
                break;
            }
            case 4:
                saveTasksToFile(tasks);
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 4." << endl;
                break;
        }

        cout << endl;
    }

    return 0;
}