
//       *
//      * *
//     * * *
//    * * * *
//   * * * * *
//  * * * * * *
       
                   // ye vala mera logic h

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter n: "; 
//     cin>>n;

//     for(int i=0; i<n; i++){
//         for(int j=0; j<(2*n-1); j++){
//             if(j>=(n-i-1) && j<=n+i-1 && (i+j)%2==0){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

//     return 0;
// }






#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: "; 
    cin>>n;

    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            cout<<" ";
        }

        for(int k=0; k<i+1; k++){
            cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
}


