#include <iostream>

int main() {
    std::string s;
    std::cout<<"Please enter your name: ";
    std::cin>>s;
    for(int i=0;i<10;i++){
        std::cout<<s<<" is good\n";
    }

    return 0;
}
