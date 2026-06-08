#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1,m2,m3;
    int total;
    float average;
    char grade;
    float highest;


    total = m1 + m2 + m3;
    average = total / 3.0;

    if (average>=80)
        grade='A';
    else if(average>=70)
        grade='B';
    else if(average>=60)
        grade='C';
    else if(average>=50)
        grade='D';
    else
        grade='F';

    highest = m1;
    if (m2 > highest) {
        highest = m2;
    }
    if (m3 > highest) {
        highest = m3;
    }

    printf("\n=========================================\n");
    printf("             OFFICIAL REPORT             \n");
    printf("=========================================\n");
    printf("Enter marks for Mathematics (0-100): ");
    scanf("%f", &m1);
    printf("Enter marks for Science (0-100): ");
    scanf("%f", &m2);
    printf("Enter marks for English (0-100): ");
    scanf("%f", &m3);
    printf("\nTotal: %d\n",total);
    printf("Average: %.2f\n",average);
    printf("Highest Marks: %d\n",highest);
    printf("Grade: %c\n",grade);

    if (m1>=40 && m2>=40 && m3>=40)
        printf("Result: PASS\n");
    else
        printf("Result: FAIL\n");

    if (average >= 85 && m1 >= 80 && m2 >= 80 && m3>= 80)
        printf("Distinction : YES\n");
    else
        printf("Distinction : NO\n");

}
