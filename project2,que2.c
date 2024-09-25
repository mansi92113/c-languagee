
#include <stdio.h>

void print_comment(char grade) {
    switch (grade) {
        case 'A': printf("Excellent work!\n");
        break;
        case 'B': printf("Well done\n");
        break;
        case 'C': printf("Good job\n");
        break;
        case 'D': printf("You passed, but you could do better\n");
        break;
        case 'F': printf("Sorry, you failed\n");
        break;
    }
}

int main() {
    float score;
    printf("Enter your score: ");
    scanf("%f", &score);

    char grade;
    if (score >= 90) grade = 'A';
    else if (score >= 80) grade = 'B';
    else if (score >= 70) grade = 'C';
    else if (score >= 60) grade = 'D';
    else grade = 'F';

    printf("Your grade is %c. ", grade);
    print_comment(grade);

    return 0;
}
