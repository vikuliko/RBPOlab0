#include "Header.h"

void PrintPersons(struct Person *persons, int personsCount){
    printf("._______________________________________________________________.\n");
    printf("|%15s|%15s|%15s|%15s|\n","First Name", "Second Name","Last Name","Date of Birth");
   for (int i = 0; i < personsCount; i++){
       printf("|_______________|_______________|_______________|_______________|\n");
       printf("|%15s|%15s|%15s|%15d|\n",persons[i].firstName, persons[i].surName,persons[i].lastName,persons[i].age);
   }
   printf("|_______________|_______________|_______________|_______________|\n");
}
