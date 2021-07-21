#include <stdio.h>

int main ()
{
    float l,b,h,edge,r;
    char ch;
    do 
    {
        printf ("Volume Menu\n");
        printf ("1.Cuboid\n");
        printf ("2.Cube\n");
        printf ("3.Cylinder\n");
        printf ("4.Cone\n");
        printf ("5.Sphere\n");
        printf ("6.Hemisphere\n");
      
        int Choice;
        printf ("Please Enter your Choice (1-6) : ");
        scanf ("%d",&Choice);
      
        switch (Choice)
        {
            case 1:
            printf("Please Enter the length of a Cuboid : ");
            scanf("%f",&l);
            printf("Please Enter the breadth of a Cuboid : ");
            scanf("%f",&b);
            printf("Please Enter the height of a Cuboid : ");
            scanf("%f",&h);
            printf("%.3f\n",l*b*h);
            break;
            
            case 2:
            printf("Please Enter the Edge of a Cube : ");
            scanf("%f",&edge);
            printf("%.3f\n",edge*edge*edge);
            break;
            
            case 3:
            printf("Please Enter the radius of a Cylinder : ");
            scanf("%f",&r);
            printf("Please Enter the height of a Cylinder : ");
            scanf("%f",&h);
            printf("%.3f\n",(22*r*r*h)/7);
            break;
            
            case 4:
            printf("Please Enter the radius of a Cone : ");
            scanf("%f",&r);
            printf("Please Enter the height of a Cone : ");
            scanf("%f",&h);
            printf("%.3f\n",(1*22*r*r*h)/(7*3));
            break;
            
            case 5:
            printf("Please Enter the radius of a Sphere : ");
            scanf("%f",&r);
            printf("%.3f\n",(4*22*r*r*r)/(7*3));
            break;
            
            case 6:
            printf("Please Enter the radius of a Hemisphere : ");
            scanf("%f",&r);
            printf("%.3f\n",(2*22*r*r*r)/(7*3));
            break;
            
            default:
	        printf ("WRONG CHOICE\n");
            
        }
        printf ("Want to continue (y/n)? : ");
        scanf ("%s", &ch);
        printf ("\n");
    
    }while (ch=='y' || ch=='Y');
    

  return 0;
}
