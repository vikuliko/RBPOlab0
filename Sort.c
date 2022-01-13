#include "Header.h"

struct Person* BubleSort(struct Person *persons, int count,enum SortType sortType){
    switch (sortType)
    {
    case 0:
        for (int i = 0; i < count; i++){
            for (int j = 0; j < count - i -1; j++){
                int flag = CompareStrings(persons[j].firstName, persons[j+1].firstName);
                if (flag >= 1) {
                    struct Person temp = persons[j];
                    persons[j] = persons[j + 1];
                    persons[j + 1] = temp;
                }
                else {
                    if (flag == 0) {
                        int flag = CompareStrings(persons[j].surName, persons[j + 1].surName);
                        if (flag >= 1) {
                            struct Person temp = persons[j];
                            persons[j] = persons[j + 1];
                            persons[j + 1] = temp;
                        }
                        else {
                            if (flag == 0) {
                                int flag = CompareStrings(persons[j].lastName, persons[j + 1].lastName);
                                if (flag >= 1) {
                                    struct Person temp = persons[j];
                                    persons[j] = persons[j + 1];
                                    persons[j + 1] = temp;
                                }
                                else {
                                    if (flag == 0) {
                                        if (persons[j].age >= persons[j + 1].age) {
                                            struct Person temp = persons[j];
                                            persons[j] = persons[j + 1];
                                            persons[j + 1] = temp;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        break;
    
    case 1:
        for (int i = 0; i < count; i++){
            for (int j = 0; j < count - i -1; j++){
                int flag = CompareStrings(persons[j].firstName, persons[j + 1].firstName);
                if (flag <= -1) {
                    struct Person temp = persons[j];
                    persons[j] = persons[j + 1];
                    persons[j + 1] = temp;
                }
                else {
                    if (flag == 0) {
                        int flag = CompareStrings(persons[j].surName, persons[j + 1].surName);
                        if (flag <= -1) {
                            struct Person temp = persons[j];
                            persons[j] = persons[j + 1];
                            persons[j + 1] = temp;
                        }
                        else {
                            if (flag == 0) {
                                int flag = CompareStrings(persons[j].lastName, persons[j + 1].lastName);
                                if (flag <= -1) {
                                    struct Person temp = persons[j];
                                    persons[j] = persons[j + 1];
                                    persons[j + 1] = temp;
                                }
                                else {
                                    if (flag == 0) {
                                        if (persons[j].age <= persons[j + 1].age) {
                                            struct Person temp = persons[j];
                                            persons[j] = persons[j + 1];
                                            persons[j + 1] = temp;
                                        }
                                    }
                                }

                            }
                        }
                    }
                }
            }
        }
        break;
    
    default:
        break;
    }
    return persons;
    
}
 
 

 

