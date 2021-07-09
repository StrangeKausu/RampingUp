#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number : ";
    cin>>a;
	for (int i=1;i<=a;i++){
	    for (int j=1;j<=i;j++){
	        if (j==i){
	        cout<<j<<"\n";
	        }
	        else{
	            cout<<j;
	        }
	    }
	}
	return 0;
}
