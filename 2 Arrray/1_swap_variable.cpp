
        // method 1. >> using 3rd variable
// #include<iostream>
// using namespace std;
// int main(){
//     int a=7;
//     int b=10;
//     int temp=0;

//     cout<<"Before swaping "<< "a="<<a<<","<<"b="<<b<<endl;
//     temp=a;
//     a=b;
//     b=temp;
//     cout<<"After swaping "<< "a="<<a<<","<<"b="<<b<<endl;
//     return 0;
// }

        // method 2>> using +, -

// #include<iostream>
// using namespace std;
// int main(){
//     int a=7;
//     int b=10;

//     cout<<"Before swaping "<< "a="<<a<<","<<"b="<<b<<endl;
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"After swaping "<< "a="<<a<<","<<"b="<<b<<endl;
//     return 0;
// }

        // method 3 >> using >> XOR

// #include<iostream>
// using namespace std;
// int main(){
//     int a=7;
//     int b=10;

//     cout<<"Before swaping "<< "a="<<a<<","<<"b="<<b<<endl;
//     a=a^b;
//     b=a^b;
//     a=a^b;
//     cout<<"After swaping "<< "a="<<a<<","<<"b="<<b<<endl;
//     return 0;
// }

                // method 4 >> using multiplication and division
#include<iostream>
using namespace std;
int main(){
    int a=7;
    int b=10;

    cout<<"Before swaping "<< "a="<<a<<","<<"b="<<b<<endl;
    a = a * b
    b = a / b
    a = a / b


    cout<<"After swaping "<< "a="<<a<<","<<"b="<<b<<endl;
    return 0;
}
    