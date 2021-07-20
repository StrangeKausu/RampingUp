#include <iostream>

int main() {
    std::string Name,School,Reason;
    std::cout<<"Please Enter your name : ";
    std::cin>>Name;
    std::cout<<"Please Enter your School name : ";
    std::cin>>School;
    std::cout<<"Please Enter the reason of leave : ";
    std::cin>>Reason;
    int Class,Start,End;
    std::cout<<"Please Enter your class : ";
    std::cin>>Class;
    std::cout<<"Please Enter the Start Date of the Leave : ";
    std::cin>>Start;
    std::cout<<"Please Enter the End Date of the Leave  : ";
    std::cin>>End;
    std::cout<<"\n\nTo,\n"; 
    std::cout<<"  The Principal\n  ";
    std::cout<<School<<"\n\n";
    std::cout<<"Subject: Request application for "<<Reason<<" leave.\n\n";
    std::cout<<"Respected Sir/Madam,\n\n";
    std::cout<<"With due respect, I would like to notify you that I need sick leave from "<<Start<<" to "<<End<<".\n\n";
    std::cout<<"I hope you will be kind to me and allow me to leave for the above dates.\n\n";
    std::cout<<"I shall be appreciative of you.\n\n" ;
    std::cout<<"You're Obediently,\n";
    
    std::cout<<Name<<"\n";
    std::cout<<Class;
    
    

    return 0;
}
