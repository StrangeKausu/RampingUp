#include <stdio.h>

int main()
{
    for (int i=0;i<100;i++){
    int a;
    printf("Press 1 for Square Perimeter , 2 for Rectangle Perimeter , 3 for Triangle Perimeter and 4 for Circle Perimeter : ");
    scanf("%d",&a);
    
    if (a==1){
    float side;
    printf("Enter the side of a Square : ");
    scanf("%f",&side);
    printf("%.3f\n",4*side);
    int x;
    printf("If you want to continue Press 5 otherwise Press 0 to exit : ");
    scanf("%d",&x);
    if(x!=5){
    break;
    }
    }
    else if (a==2){
    float length;
    printf("Enter the length of a Rectangle : ");
    scanf("%f",&length);
    float breadth;
    printf("Enter the breadth of a Rectangle : ");
    scanf("%f",&breadth);
    printf("%.3f\n",2*(length+breadth));
    int y;
    printf("If you want to continue Press 5 otherwise Press 0 to exit : ");
    scanf("%d",&y);
    if(y!=5){
    break;
    }
    }
    else if (a==3){
        float side1;
        printf("Enter the 1st side of Triangle : ");
        scanf("%f",&side1);
        float side2;
        printf("Enter the 2nd side of Triangle : ");
        scanf("%f",&side2);
        float side3;
        printf("Enter the 3rd side of Triangle : ");
        scanf("%f",&side3);
        printf("%.3f\n",side1+side2+side3);
        int z;
        printf("If you want to continue Press 5 otherwise Press 0 to exit : ");
        scanf("%d",&z);
        if(z!=5){
        break;
        }
    }  
    else if (a==4){
        float radius;
        printf("Enter the radius of Circle : ");
        scanf("%f",&radius);
        printf("%.3f\n",(2*22*radius)/7);
        int p;
        printf("If you want to continue Press 5 otherwise Press 0 to exit : ");
        scanf("%d",&p);
        if(p!=5){
        break;
    }
    }
    else{
        printf("You Press Wrong No.");
        break;
    
    }
    
        
    }    
        
    
   
    

    return 0;
}