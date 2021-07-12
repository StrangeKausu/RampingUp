#include stdio.h

int main()
{
    for (int i=0;i<100;i++){
    int a;
    printf(Press 1 for Fahrenheit to °Celcius otherwise Press 2 for °Celcius to Fahrenheit  );
    scanf(%d,&a);
    
    if (a==1) {
        float Fahrenheit,Celcius,j;
        printf(Temperature in Fahrenheit  );
        scanf(%f,&Fahrenheit);
        Celcius=(Fahrenheit-32 )59 ;
        printf(%.2f°Cn,Celcius);
        printf(If you want to continue Press 5 otherwise Press 0 for exit  );
        scanf(%f,&j);
        if (j!=5){
            break;
        }
    }
    else if (a==2) {
        float Fahrenheit,Celcius,k;
        printf(Temperature in °Celcius  );
        scanf(%f,&Celcius);
        Fahrenheit=(9Celcius5) + 32;
        printf(%.2f°Fn,Fahrenheit);
        printf(If you want to continue Press 5 otherwise Press 0 for exit  );
        scanf(%f,&k);
        if (k!=5){
            break;
        }
    }
    else{
        printf(YOU PRESS WRONG NUMBERn);
        int m;
        printf(If you want to continue Press 5 otherwise Press 0 for exit  );
        scanf(%d,&m);
        if (m!=5){
            break;
        }
    }
    
    }
    
    return 0;
}
