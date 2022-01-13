#include "Header.h"

struct Person* GetPersons(int argc, char* argv[], int *count) { 
    //������� ���-�� ������
    
    for (int i = 1; i < argc; i++) { 
        if (CompareStrings(argv[i], "-person") == 0) { 
            *count = *count + 1; 
        } 
    }
    if (*count < 1) {
        printf("��������� �� �������"); 
        return 0;
    }

    //��������� ������ �� ��������
    struct Person* persons = (struct Person*)malloc(sizeof(struct Person) * *count); 
    //������������� ����� (������������ �����������)
    for (int i = 0; i < *count; i++) {
        persons[i].firstName = (char*)malloc(1 * strlen("�� ������"));
        strcpy(persons[i].firstName,"�� ������");
        persons[i].surName = (char*)malloc(1 * strlen("�� ������"));
        strcpy(persons[i].surName , "�� ������");
        persons[i].lastName = (char*)malloc(1 * strlen("�� ������"));
        strcpy(persons[i].lastName, "�� ������");
        persons[i].age = 18;
    } 
    

    int indexOfPersons = 0; 
    //���������� ���������
    for (int i = 0; i < argc; i++) { 
        if (CompareStrings(argv[i], "-person") == 0) {
            for (int j = i + 1; j < argc && CompareStrings(argv[j], "-person") != 0; j++) { 
                if (CompareStrings(argv[j], "--fN") == 0) { 
                    persons[indexOfPersons].firstName = (char*)realloc(persons[indexOfPersons].firstName,1 * strlen(argv[j + 1]));
                    strcpy(persons[indexOfPersons].firstName, argv[j + 1]);
                } 
                if (CompareStrings(argv[j], "--sN") == 0) { 
                    persons[indexOfPersons].surName = (char*)realloc(persons[indexOfPersons].surName,1 * strlen(argv[j + 1]));
                    strcpy(persons[indexOfPersons].surName, argv[j + 1]);
                } 
                if (CompareStrings(argv[j], "--lN") == 0) { 
                    persons[indexOfPersons].lastName = (char*)realloc(persons[indexOfPersons].lastName,1 * strlen(argv[j + 1]));
                    strcpy(persons[indexOfPersons].lastName, argv[j + 1]);
                } 
                if (CompareStrings(argv[j], "--age") == 0) { 
                    int age = atoi(argv[j + 1]); 
                    persons[indexOfPersons].age = age;
                } 
            } 
            indexOfPersons++;
        } 
    } 
    return persons;
}