#include "header.h"

int main() {
    Task tasks[MAX_TASKS];
    int taskCount = 0;
    int choice;

    printf("Welcome to the To-Do List app!\n");

    do {
        printf("\nEnter your choice: \n");
        printf("\n1. Add a Task\n");
        printf("2. Display Tasks\n");
        printf("3. Check off a Task\n");
        printf("4. Exit\n\n");
       
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addTask(tasks, &taskCount);
            break;
        case 2:
            displayTasks(tasks, taskCount);
            break;
        case 3:
            markCompleted(tasks, taskCount);
            break;
        case 4:
            printf("\nThank you for using the To-Do List App, goodbye! :) \n");
            break;
        default:
            printf("\nInvalid choice, please try again! \n\n");
        }
    } while (choice != 4);

    return 0;
}
