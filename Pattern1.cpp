#include <iostream>
using namespace std;

int main() {
    int a;
    cout<<"Enter a number : ";
    cin>>a;
	for (int i=1;i<=a;i++){
	    if (i!=1){
	    cout<<"\n";
	    }
	    for (int j=1;j<=i;j++){
	        cout<<j;
	    }
	}
	return 0;
}
