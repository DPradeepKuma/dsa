
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
        cout << "-1" << endl;
    }
    return 0;
}