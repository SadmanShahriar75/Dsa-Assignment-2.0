#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> l={1,2,3,3,4,3,5};

    
    l.unique();


    for(int val: l){
        cout << val << endl;
    }
}
