#include <stdio.h>

int main()
{
    float Fahrenheit,Celcius;
    char ch;
    do
    {
        printf ("Temperature Conversion Menu\n");
        printf ("1.Fahrenheit to Celcius \n");
        printf ("2.Celcius to Fahrenheit \n");
        
        int Choice;
        printf ("Please Enter your Choice (1-2) : ");
        scanf ("%d",&Choice);
        
        switch (Choice)
        {
            case 1:
            printf("Enter Temperature in Fahrenheit : ");
            scanf("%f",&Fahrenheit);
            Celcius=(Fahrenheit-32) /1.8 ;
            printf("The Temperature in Celcius is %.2f°C\n\n",Celcius);
            break;
            
            case 2:
            printf("Enter Temperature in Celcius : ");
            scanf("%f",&Celcius);
            Fahrenheit=(1.8*Celcius) + 32;
            printf("The Temperature in Fahrenheit is %.2f°F\n\n",Fahrenheit);
            break;
            
            default:
            printf ("WRONG CHOICE\n");
            
        }
        printf ("Want to continue (y/n)? : ");
        scanf ("%s", &ch);
        printf ("\n");
        
    } while (ch=='y' || ch=='Y');
    
    
    return 0;
}

