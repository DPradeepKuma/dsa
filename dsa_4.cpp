#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<math.h>
using namespace std;

//function are set of code which performs smoothing for you
//functions are used to modularisemcode
//functions used to increase readability
//functions are used to use same code multiple times
//void
//return
//parametrised
//non paramerterised

// void printnames(string name){
//     cout<<"my name is "<<name<<endl;
// }

//int main(){
    // string name;
    // cin>>name;
    // printnames(name);
    // printnames(name);
    // printnames(name);
    // string name2;
    // cin>>name2;
    // printnames(name2);
    // printnames(name2);
//}
    //take two numbers and print its sum
// int sum(int num1,int num2){
//     int num3=num1+num2;
//     //return num3;
//     cout<<num3;

// }


// int main(){
//     //take two numbers and print its sum
//     int num1,num2;
//     cin>>num1>>num2;
//     int num3=num1+num2;
//     //int res=sum(num1,num2);
//     sum(num1,num2);
//     cout<<"\n res"<<endl<<num3<<endl;



//     return 0;
// }

// int max_value(int num1,int num2){
//     if(num1>=num2){
//         return num1;
//     }
//     // else{
//     //     return num2;
//     // }
//     //if we not taken else then write return value 
//     //in case of if condation is failed

// }

// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     int minimum=min(num1,num2);
//     cout<<minimum<<endl;
//     int maximum=max(num1,num2);
//     cout<<maximum<<endl;
//     int max_1= max_value(num1,num2);
//     cout<<max_1<<endl;
//     return 0;
// }

// void dosomething(){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num2<endl;
//     num+=5;
//     cout<<num<<endl;
// }
// int main(){
//     int num =10;
//     dosamething(num);
// }

//pass by value
// void dosomething(int num){
//     cout<<num<<endl;  //99
//     num+=5;
//     cout<<num<<endl; //104
//     num+=5;
//     cout<<num<<endl; //109

// }
// int main(){
//     int num;
//     cin>>num;
//     dosomething(num);
//     cout<<num<<endl; //99
//     return 0;
// }



//using strings pass by values

// void todosomething(string s){
//     s[0]='k';
//     cout<<s<<endl;
// }
// int main(){
//     string str="pradeep";
//     todosomething(str);
//     cout<<str<<endl;
// }



//pass by refrence
/*void todosomething(string &s){
    s[0]='P';
    cout <<"output in the function is "<<s<<endl;
}*/
// void todosomething(int &num){
//     cout<<"output in the function is "<<num<<endl;
//     num+=5;
//     cout<<"output in the function is "<<num<<endl;
//     num+=5;
//     cout <<"output in the function is "<<num<<endl;
// }
// int main(){
//     //string str;
//     int num1=10;
//     //cout<<"enter the string as you wish"<<endl;
//     //cin>>str;
//     cout<<"enter the input number"<<endl;
//     cin>>num1;
//     // todosomething(str);
//     todosomething(num1);

//     // cout<<"output in the main "<<str;
//     cout<<"output in the main "<<num1;
    
//     return 0;

// }


// using arrays in loops using functions 
//and also using statements condintions
// for arrays "&" this symbol is not used

void todosomething(int arr[],int n){
    arr[0]+=10;
    cout<<"the value inside function :"<<arr[0]<<endl;
}

int main(){
    int n;
    cout<<"enter the number of iterations :"<<endl;
    cin>>n;
    

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the input number of times or enter the input as n times "<<endl;
        cin>>arr[i];

    }
    todosomething(arr,n);
    for(int i=0;i<n;i++){
        cout<<"the value inside the main is :"<<arr[0]<<endl;
    }

}
