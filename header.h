#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 10
#define MAX_TASK_LENGTH 50

typedef struct {
    char task[MAX_TASK_LENGTH];
    int completed;
} Task;

void addTask(Task* tasks, int* count);

void displayTasks(Task* tasks, int count);

void markCompleted(Task* tasks, int count);

