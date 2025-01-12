
           // method 1  O(n)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={0,1,1,0,0,1,1};

//     int size=7;
//     int zeroCount=0;

//     for(int i=0; i<size; i++){
//         if(arr[i]==0){
//             zeroCount++;
//         }
//     }
//     fill(arr, arr+3, 0);
//     fill(arr+3, arr+size, 1);

//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

        // method 2   O(nlogn)

// #include<iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     int arr[]={0,1,1,0,0,1,1};

//     int size=7;

//     sort(arr, arr+size);

//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


        // method 3 >> 2 pointer approach

#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={0,1,1,0,0,1,1};
    int size=7;
    int i=0;
    int j=6;
    while(i<j){
        if(arr[i]==0){i++;}
            
        if(arr[j]==1){j--;}

        if(arr[i]==1 && arr[j]==0){
            arr[i]=arr[i]^arr[j];
            arr[j]=arr[i]^arr[j];
            arr[i]=arr[i]^arr[j];

            i++;
            j--;
        }
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}