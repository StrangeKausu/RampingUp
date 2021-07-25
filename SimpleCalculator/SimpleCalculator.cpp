#include <iostream>
using namespace std;

int main ()
{
    float num1, num2, add, minus, mul, div;
    char ch;
    do
    {
        cout<<"Please Enter your 1st Number : ";
        cin>>num1;
        cout<<"Please Enter your 2nd Number : ";
        cin>>num2;
    
        cout<<"Operator Menu\n";
        cout<<"1. +\n";
        cout<<"2. -\n";
        cout<<"3. *\n";
        cout<<"4. /\n";
    
        int choice;
        cout<<"Enter your choice (1-4) : ";
        cin>>choice;
    
        switch (choice)
    	{
    	    case 1:
    	    cout<<num1 + num2<<endl;
    	    break;
    
    	    case 2:
    	    cout<<num1 - num2<<endl;
    	    break;
    
    	    case 3:
    	    cout<<num1 * num2<<endl;
    	    break;
    
        	case 4:
            cout<<num1 / num2<<endl;
        	break;
        
        	default:
        	cout<<"WRONG CHOICE\n";
        	
        }
        cout<<"Want to continue (y/n)? : ";
        cin>>ch;
        cout<<"\n";
    
    } while (ch == 'y' || ch == 'Y');



  return 0;
}
