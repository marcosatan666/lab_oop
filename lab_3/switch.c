//Print the value 0 <K <10 in roman numerals.
#include <stdio.h>

void main() {
    int day;
    printf("Enter the number from 1 to 9: ");
    scanf("%d", &day);
    switch(day) {
        case 1: printf("I"); break;
        case 2: printf("II"); break;
        case 3: printf("III"); break;
        case 4: printf("IV"); break;
        case 5: printf("V"); break;
        case 6: printf("VI"); break;
        case 7: printf("VII"); break;
        case 8: printf("VIII"); break;
        case 9: printf("IX"); break;
        default: printf("Wrong number.");
    }
}
