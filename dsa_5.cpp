// #include<iostream>//#include <bits/stdc++.h >
// using namespace std;
// int main(){
//     char ch;
//     cin >> ch;
//     if (ch >= 'A' && ch <= 'Z') {
//         cout<< "1";
//     }
//     else if(ch >= 'a' && ch <= 'z') {
//         cout<< "0";
//     }
//     else {
//         cout<< "-1";
//     }
//      return 0;}
     

#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    if (ch >= 65 && ch <= 90) {
        cout << "1" << endl;
    }
    else if (ch >= 97 && ch <= 122) {
        cout << "-1" << endl;
    }
    else {
        cout << "0" << endl;
    }
    return 0;
}