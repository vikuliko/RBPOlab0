#include "Header.h"

int CompareStrings(const char *lhs, const char *rhs) { 
    int i = 0; 
    while (lhs[i] && rhs[i] && lhs[i] == rhs[i]) { 
        i++; 
    } 
    return lhs[i] - rhs[i]; 
    
}