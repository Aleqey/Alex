
#include<stdio.h>

int main()
{
    float marks[5], sum = 0, mean;
    char grade;
    
    printf("Enter the marks of five subjects:\n");
    
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    
    
    mean = sum / 5;
    
    
    if(mean >= 80)
        grade = 'A';
    else if(mean >= 70)
        grade = 'B';
    else if(mean >= 60)
        grade = 'C';
    else if(mean >= 50)
        grade = 'D';
    else
        grade = 'E';
    
    
    switch(grade)
    {
        case 'A':
            printf("Excellent performance!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Average performance.\n");
            break;
        case 'D':
            printf("Need improvement.\n");
            break;
        case 'E':
            printf("Fail.\n");
            break;
        default:
            printf("Invalid grade.\n");
            break;
    }
  
    printf("Mean: %.2f\nGrade: %c\n", mean, grade);
    
    return 0;
}