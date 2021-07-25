#include <stdio.h>

int main()
{
    float side,length,breadth,radius;
    float side1,side2,side3;
    char ch;
    do
    {
        printf ("Perimeter Menu\n");
        printf ("1.Square\n");
        printf ("2.Rectangle\n");
        printf ("3.Triangle\n");
        printf ("4.Circle\n");
        
        int Choice;
        printf ("Please Enter your Choice (1-4) : ");
        scanf ("%d",&Choice);
        
        switch (Choice)
        {
            case 1:
            printf("Enter the side of a Square : ");
            scanf("%f",&side);
            printf("%.3f\n",4*side);
            break;
        
            case 2:
            printf("Enter the length of a Rectangle : ");
            scanf("%f",&length);
            printf("Enter the breadth of a Rectangle : ");
            scanf("%f",&breadth);
            printf("%.3f\n",2*(length+breadth));
            break;
            
            case 3:
            printf("Enter the 1st side of Triangle : ");
            scanf("%f",&side1);
            printf("Enter the 2nd side of Triangle : ");
            scanf("%f",&side2);
            printf("Enter the 3rd side of Triangle : ");
            scanf("%f",&side3);
            printf("%.3f\n",side1+side2+side3);
            break;
            
            case 4:
            printf("Enter the radius of Circle : ");
            scanf("%f",&radius);
            printf("%.3f\n",(2*22*radius)/7);
            break;
            
            default:
            printf("WRONG CHOICE\n");
            
        }
        printf ("Want to continue (y/n)? : ");
        scanf ("%s", &ch);
        printf ("\n");
    
    }while (ch=='y' || ch=='Y');
        
     

    return 0;
}
