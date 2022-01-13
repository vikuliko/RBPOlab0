#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <memory.h>

struct Person {
	char* firstName;
	char* surName;
	char* lastName;
	unsigned int age;
};

enum SortType {
	ASC=0,
	DESC
};

void PrintPersons(struct Person *persons, int personsCount);
struct Person* GetPersons(int argc, char* argv[], int* count);
int CompareStrings(const char *lhs, const char *rhs);
struct Person* BubleSort(struct Person *persons, int count,enum SortType sortType);
