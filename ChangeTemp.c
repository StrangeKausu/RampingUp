#include <stdio.h>

int main()
{
    for (int i=0;i<100;i++){
    int a;
    printf("Press 1 for Fahrenheit to °Celcius  \n");
    printf("Press 2 for °Celcius to Fahrenheit  \n");
    scanf("%d",&a);
    
    if (a==1) {
        float Fahrenheit,Celcius,j;
        printf("Enter Temperature in Fahrenheit : ");
        scanf("%f",&Fahrenheit);
        
        Celcius=(Fahrenheit-32) /1.8 ;
        printf("The Temperature in Celcius is %.2f°C\n\n",Celcius);
        printf("If you want to continue Press 5 otherwise Press 0 for exit : ");
        scanf("%f",&j);
        if (j!=5){
            break;
        }
    }
    else if (a==2) {
        float Fahrenheit,Celcius,k;
        printf("Enter Temperature in °Celcius : ");
        scanf("%f",&Celcius);
        
        Fahrenheit=(1.8*Celcius) + 32;
        printf("The Temperature in Fahrenheit is %.2f°F\n\n",Fahrenheit);
        printf("If you want to continue Press 5 otherwise Press 0 for exit : ");
        scanf("%f",&k);
        if (k!=5){
            break;
        }
    }
    else{
        printf("YOU PRESS WRONG NUMBER\n\n");
        int m;
        printf("If you want to continue Press 5 otherwise Press 0 for exit : ");
        scanf("%d",&m);
        if (m!=5){
            break;
        }
    }
    
    }
    
    return 0;
}

