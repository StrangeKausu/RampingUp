#include <iostream>
int main() {
    
    float weight,height,bmi;
    char ch;
    do
    {
        std::cout<<"Body Mass Index(BMI) Menu\n ";
        std::cout<<"1.Imperial BMI System\n";
        std::cout<<"2.Metric BMI System\n";
        
        int choice;
        std::cout<<"Please Enter your choice (1-2) : ";
        std::cin>>choice;
        
        switch (choice)
        {
            case 1:
            std::cout<<"Please Enter your weight(in pounds) : ";
            std::cin>>weight;
            std::cout<<"Please Enter your height(in inches) : ";
            std::cin>>height;
            bmi=weight/(height*height)*703;
            std::cout<<"Your BMI is "<<bmi<<"\n";
            if (bmi<18.5){
                std::cout<<"Weight Status : Underweight\n";
            }
            else if (bmi<=24.9){
                std::cout<<"Weight Status : Normal weight\n";
            }
            else if (bmi<=29.9){
                std::cout<<"Weight Status : Overweight (Pre-obesity)\n";
            }
            else if (bmi<=34.9){
                std::cout<<"Weight Status : Obesity class I\n";
            }
            else if (bmi<=39.9){
                std::cout<<"Weight Status : Obesity class II\n";
            }
            else if (bmi>=40){
                std::cout<<"Weight Status : Obesity class III\n";
            }
            break;
            
            case 2:
            std::cout<<"Please Enter your weight(in kg) : ";
            std::cin>>weight;
            std::cout<<"Please Enter your height(in cm) : ";
            std::cin>>height;
             bmi=weight/(height*height)*703;
            std::cout<<"Your BMI is "<<bmi<<"\n";
            if (bmi<18.5){
                std::cout<<"Weight Status : Underweight\n";
            }
            else if (bmi<=24.9){
                std::cout<<"Weight Status : Normal weight\n";
            }
            else if (bmi<=29.9){
                std::cout<<"Weight Status : Overweight (Pre-obesity)\n";
            }
            else if (bmi<=34.9){
                std::cout<<"Weight Status : Obesity class I\n";
            }
            else if (bmi<=39.9){
                std::cout<<"Weight Status : Obesity class II\n";
            }
            else if (bmi>=40){
                std::cout<<"Weight Status : Obesity class III\n";
            }
            break;
            
            default:
            std::cout<<"WRONG CHOICE\n";
        }
        std::cout<<"\nWant to continue (y/n)? : ";
        std::cin>>ch;
        std::cout<<"\n";
        
    } while (ch=='y' || ch=='Y');
    
    return 0;
}
