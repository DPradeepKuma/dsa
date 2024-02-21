#include<bits/stdc++.h>  //in this #include< bits/stdc++.h > it includes all liberies in c++
using namespace std;
int main(){

/*     1.
       writ a program that takes an input of age
       and prints if you are adult or not */

    // int age;
    // cout<<"enter your age is :\n";
    // cin>>age;
    // // >= 18 your adult or your not an adult
    // if(age>=18){
    //     cout<<"you are an adult"<<endl;
    // }
    // else if(age<=18){
    //     cout<<"you are not an adullt"<<endl;
    // }

/*   2.
    A school has following rules for greding system:
    a. Below 25 - F
    b. 25 to 44 - E
    c. 45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. 80 to 100 - A
    ask userr to enter marks and print the corresponding grades

    */
//    int marks;
//    cout<<"enter the marks :\n"<<endl;
//    cin>>marks;
//    if(marks < 25){
//     cout<<" you scored F in this exam";
//    }
//     else if(marks >=25 && marks <=44){
//     cout<<" you scored E in this exam";
//    }
//    else if(marks >= 45 && marks <= 49){
//     cout<<" you scored D in this exam";
//    }
//    else if(marks >= 50 && marks <=59 ){
//     cout<<" you scored C in this exam";
//    }
//    else if(marks >= 60 && marks <=69 ){
//     cout<<" you scored B in this exam";
//    }
//    else if(marks >= 70 && marks<=79){
//     cout<<" you scored A in this exam";
//    }
//    else if(marks >= 80 && marks <=89){
//     cout<<" you scored O in this exam";
//    }
//    else if(marks >= 90 && marks <=100){
//     cout<<" you scored O+ in this exam";
//    }
    
/*   3.
Take the age from the userand then decide accordingly
    1.if age <= 18,
       print -> not eligible for job
    2.if age >=18,
       print -> "eligible for job"
    3.if age >= 55 and  age <= 57,
       print -> "eligible for job , but retirement soon. "
    4.if age >57
       print -> "retirement time "
       
    */

   // int age;
   // cout<<"enter your age :"<<endl;
   // cin>>age;
   // if(age<18){
   //  cout<<"not eligilible for job"<<endl;

   // }
   // else if (age<=54){
   //  cout<<"your elligilible for job"<<endl;

   // }
   // else if (age <= 57){
   //  cout<<"your eligible for job,but retirement soon"<<endl;

   // }
   // else{
   //  cout<<"retirement time"<<endl;

   // }

   /*taking ouput as remainder without using for loop */

   // int num;
   // cin>>num;
   // int rem=num%9;
   // if(num % 9 == 0){
   //    cout<<9;
   // }
   // else{
   //    cout<<rem;
   // }

   /*giving ouput as evrn or odd with out using if stataments and  loops concepts */

   // int a;
   // cin>>a;
   // string arr={"Even","Odd"};
   // cout<<arr[a%2]<<endl;

   /*take the day no and print the corresponding day 
   for 1 print Monday
   for 2 print Tursday and so on for 7 print Sunday
    */

   //switch statements
 
   // int day;
   // cin>>day;
   // switch(day){
   //    case 1 :
   //    cout<<"Monday";
   //    break;
   //    case 2:
   //    cout<<"Tuesday";
   //    break;
   //    case 3:
   //    cout<<"Wednessday";
   //    break;
   //    case 4:
   //    cout<<"Thursday";
   //    break;
   //    case 5:
   //    cout<<"Friday";
   //    break;
   //    case 6:
   //    cout<<"Saturday";
   //    break;
   //    case 7:
   //    cout<<"Sunday";
   //    break;
   //    default:
   //    cout<<"Invalid";


   // }

   //inputs

   // int a,b,c,d;
   // cin>> a >> b>> c>> d;
   // cout<<a+b+c+d;

//arrays (1D arrays)

   // int a[5];
   // cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
   // cout<<a[0]+a[1]+a[2]+a[3]+a[4]+a[5]<<endl;
   // a[3]+=1234;
   // cout<<a[3]<<endl;
   // a[3]=11;
   // cout<<a[3];

   //array (2D arrays)

   // int a[3][5]; 
   // a[3][3]=123;
   // cout<<a[3][3]<<endl;
   // cout<<a[2][1];// here the value is garbage value stores because we havent assigned values to arrays to that particluar array
   
   //srings using arrays
   string s="pradeep kumar";
   int len=s.size();
   cout<<len<<" "<<endl;
   s[len-1]='7';
   cout<<s[len-1];









































    return 0;
}