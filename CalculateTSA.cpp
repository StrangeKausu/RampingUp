#include <iostream>
using namespace std;

int main() {
    float l,b,h,edge,r;
    char ch;
    do 
    {
        cout<<"TSA Menu\n";
        cout<<"1.Cuboid\n";
        cout<<"2.Cube\n";
        cout<<"3.Cylinder\n";
        cout<<"4.Cone\n";
        cout<<"5.Sphere\n";
        cout<<"6.Hemisphere\n";
      
        int Choice;
        cout<<"Please Enter your Choice (1-6) : ";
        cin>>Choice;
      
        switch (Choice)
        {
            case 1:
            cout<<"Please Enter the length of a Cuboid : ";
            cin>>l;
            cout<<"Please Enter the breadth of a Cuboid : ";
            cin>>b;
            cout<<"Please Enter the height of a Cuboid : ";
            cin>>h;
            cout<<2*((l*b)+(b*h)+(h*l))<<"\n";
            break;
            
            case 2:
            cout<<"Please Enter the Edge of a Cube : ";
            cin>>edge;
            cout<<6*(edge*edge)<<"\n";
            break;
            
            case 3:
            cout<<"Please Enter the radius of a Cylinder : ";
            cin>>r;
            cout<<"Please Enter the height of a Cylinder : ";
            cin>>h;
            cout<<2*22*r*(h+r)/7<<"\n";
            break;
            
            case 4:
            cout<<"Please Enter the radius of a Cone : ";
            cin>>r;
            cout<<"Please Enter the Slant height of a Cone : ";
            cin>>l;
            cout<<22*r*(l+r)/7<<"\n";
            break;
            
            case 5:
            cout<<"Please Enter the radius of a Sphere : ";
            cin>>r;
            cout<<(4*22*r*r)/7<<"\n";
            break;
            
            case 6:
            cout<<"Please Enter the radius of a Hemisphere : ";
            cin>>r;
            cout<<(3*22*r*r)/7<<"\n";
            break;
            
            default:
	        cout<<"WRONG CHOICE\n";
            
        }
        cout<<"Want to continue (y/n)? : ";
        cin>>ch;
        cout<<"\n";
    
    }while (ch=='y' || ch=='Y');
    
    

    return 0;
}