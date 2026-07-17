#include <stdio.h>

int main() {
    int marks;
    char grade;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) 
    {
        printf("Invalid input. Please enter marks between 0 and 100.\n");
    } 
    else
    {
        if (marks >= 90) 
        {
            grade = 'A';
        } 
        else if (marks >= 80) 
        {
            grade = 'B';
        } 
        else if (marks >= 70)
        {
            grade = 'C';
        } 
        else if (marks >= 60) 
        {
            grade = 'D';
        } 
        else
        {
            grade = 'F';
        }
        printf("Grade: %c\n", grade);
    }
    
    printf("\nName : Vadsola Kishan Dhirubhai");
    printf("\nId : 24CE134");
     return 0;
}