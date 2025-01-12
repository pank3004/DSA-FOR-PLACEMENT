#include<iostream>
using namespace std;
int main(){
    int arr[]={3,4,56,1,3,45,26, 78};
    //int arrEven[]={3,4,56,21,23,45,26,45};

    int size=8;
    int i=0;
    int j=7;

    while(i<j){
        arr[i]=arr[i]^arr[j];
        arr[j]=arr[i]^arr[j];
        arr[i]=arr[i]^arr[j];
        i++;
        j--;
    }

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}