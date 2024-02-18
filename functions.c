#include "header.h"

void addTask(Task* tasks, int* count) {
    if (*count >= MAX_TASKS) {
        printf("Sorry, your to-do list is full!\n");
        return;
    }

    printf("\nEnter the task: ");
    scanf(" %[^\n]s", tasks[*count].task);
    tasks[*count].completed = 0;
    (*count)++;
}

void displayTasks(Task* tasks, int count) {
    printf("\nMy To-Do List:\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d. %s %s\n", i + 1, tasks[i].task, tasks[i].completed ? "[Completed]" : "");
    }
    printf("-------------------------------------------------\n");
}

void markCompleted(Task* tasks, int count) {
    int taskNum;
    displayTasks(tasks, count);
    printf("Enter the number of the task to mark as completed: ");
    scanf("%d", &taskNum);
    if (taskNum < 1 || taskNum > count) {
        printf("\nInvalid task number! Please try again.\n");
        return;
    }
    tasks[taskNum - 1].completed = 1;
    printf("\nThat task is now marked as complete, great job!\n");
}
