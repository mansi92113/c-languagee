
#include <stdio.h>

char calculate_grade(float score)
{

    return (score >= 90) ? 'A' :
           (score >= 80) ? 'B' :
           (score >= 70) ? 'C' :
           (score >= 60) ? 'D' : 'F';
}

int main()
{
    float score;

    printf("Enter your score (0-100): ");
    scanf("%f", &score);


    if (score >= 0 && score <= 100)
        {
        char grade = calculate_grade(score);
        printf("Your grade is %c\n", grade);
    } else {
        printf("Please enter a score between 0 and 100.\n");
    }

    return 0;
}
