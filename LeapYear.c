#include <stdio.h>

int main()
{
    int year;
    char ch;
    
    do
    {
        printf("Please Enter a Year : ");
        scanf("%d",&year);
        
        if (year%4==0 && year%100!=0){
            printf("%d is a leap year\n",year);
        }
        
        else if (year%400==0){
            printf("%d is a leap year\n",year);
        }
        
        else {
            printf("%d is not a leap year\n",year);
        }
        
        printf("Want to continue (y/n)? : ");
        scanf("%s",&ch);
        printf("\n");
        
        } while (ch=='y' || ch=='Y');

    return 0;
}
