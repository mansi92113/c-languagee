
#include <stdio.h>

void print_comment(char grade) {
    switch (grade) {
        case 'A': printf("Excellent work! ");
        break;
        case 'B': printf("Well done. ");
        break;
        case 'C': printf("Good job. ");
        break;
        case 'D': printf("You passed, but you could do better. ");
        break;
        case 'F': printf("Sorry, you failed. ");
        break;
    }
}

int main() {
    float score;
    printf("Enter your score: ");
    scanf("%f", &score);

    char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : (score >= 60) ? 'D' : 'F';

    printf("Your grade is %c. ", grade);
    print_comment(grade);

    printf(grade >= 'A' && grade <= 'D' ? " You are eligible for the next level.\n" : "Please try again next time.\n");

    return 0;
}
