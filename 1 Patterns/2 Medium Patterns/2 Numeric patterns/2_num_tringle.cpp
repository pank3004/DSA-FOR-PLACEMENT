
// Enter n: 7
// 1
// 8 2
// 14 9 3
// 19 15 10 4
// 23 20 16 11 5
// 26 24 21 17 12 6
// 28 27 25 22 18 13 7


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: "; 
    cin>>n;
    int k=1;
    int m=-1;
    for(int i=0; i<n; i++){
       for(int j=0; j<=i; j++){
        if(j==0){
            m=k;
        }
        cout<<k<<" ";
        k=k-(n-i+j);
       }
       k=m+(n-i);
       cout<<endl;
    }
    return 0;
}