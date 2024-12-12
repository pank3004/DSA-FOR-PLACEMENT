#include<iostream>
using namespace std;
int main(){

    int n;
    
    cout<<"Enter n: ";
    cin>>n;

    for(int i=0; i<n; i++){
        char ch='A'-1;
        for(int j=0; j<=i; j++){
            ch++;
            cout<<ch;
        }

        for(int k=0; k<i; k++){
            ch--;
            cout<<ch;
        }

        cout<<endl;
    }
    
    return 0;
}

