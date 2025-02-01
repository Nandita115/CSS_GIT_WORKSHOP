#include <stdio.h>
#include <string.h>

// TODO: Add functionality to remove or edit tasks
// TODO: Save tasks to a file for persistence

#define MAX_TASKS 10
#define MAX_LENGTH 50

char tasks[MAX_TASKS][MAX_LENGTH];
int taskCount = 0;
void addTask(const char *task) {
    if (taskCount < MAX_TASKS) {
        strcpy(tasks[taskCount++], task);
        printf("Task added!\n");
    } else {
        printf("Task list is full!\n");
    }
}

void showTasks() {
    printf("\nYour Tasks:\n");
    for (int i = 0; i < taskCount; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }
}

int main() {
    int choice;
    char task[MAX_LENGTH];

    while (1) {
        printf("\nTo-Do List\n");
        printf("1. Add Task\n");
        printf("2. Show Tasks\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a task: ");
                scanf(" %[^\n]", task);
                addTask(task);
                break;
            case 2:
                showTasks();
                break;
            case 0:
                printf("Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
}
