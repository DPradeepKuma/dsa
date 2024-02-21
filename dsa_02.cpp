#include<bits/stdc++.h>
using namespace std;
// void explainVector(){
//     vector<int> v;
//     v.push_back(1);
//     v.emplace_back(2);

//     vector <pair<int ,int>> vec;
//     v.push_back(1,4);
//     v.emplace_back(1,3);

//     vector<int>v(5,100);
//     vector<int>v(5);
//     v.push_back(2);

//     vector<int>v1(5,20);
//     vector<int>v2(v1);
    

// }
// int main(){
//     explainVector();
// }
int main(){
    vector <int> v;
    for(int i=0;i<10;i++){
        v.push_back(i); //inserting elements in the vector
    }
    cout<<"the elements in the vector: ";
    for(vector <int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";

        cout<<"\n the fount element of the vector : "<<v.front();
        cout<<"\n the last element of the vector: " <<v.back();
        cout<<"\n the size of the vector: "<<v.sizze();
        cout<<"\n Deleting element from the end: "<<v[v.size()-1];
        //v.pop_back();


    }
}