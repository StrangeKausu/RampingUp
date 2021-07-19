import java.util.Scanner;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc=new Scanner(System.in);
	    char ch;
	    
    do
    {  
    System.out.print("Please Enter your 1st Number : ");
    float num1=sc.nextFloat();
    System.out.print("Please Enter your 2nd Number : ");
    float num2=sc.nextFloat();

    System.out.println("Operator Menu");
    System.out.println("1. +");
    System.out.println("2. -");
    System.out.println("3. *");
    System.out.println("4. /");
    
    System.out.print("Enter your choice (1-4) : ");
    int choice=sc.nextInt();
    
    switch(choice)
    {
        case 1:
        float add=num1+num2;
        System.out.println(add);
        break;
        
        case 2:
        float minus=num1-num2;
        System.out.println(minus);
        break;
        
        case 3:
        float mul=num1*num2;
        System.out.println(mul);
        break;
        
        case 4:
        float div=num1/num2;
        System.out.println(div);
        break;
        
        default:
            System.out.println("WRONG CHOICE");
            
    }
    
    System.out.print("Want to continue (y/n)? : ");
    ch=sc.next().charAt(0);
    System.out.print("\n");
    
    
    } while(ch=='y' || ch=='Y'); 


    }
}





