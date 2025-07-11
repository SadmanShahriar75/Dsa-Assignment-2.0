#include <iostream>
#include <list>
using namespace std;

bool isSame(list<int>& l1, list<int>& l2) {
 
    if(l1.size()!=l2.size()) return false;
    
    auto it1 =  l1.begin();
    auto it2  = l2.begin();
    
    while(it1 != l1.end()){
        if(*it1 != *it2) return false;
        it1++;
        it2++;
    }

    return true;
}

int main() {
    list<int> l1, l2;
    int val;

    while (cin >> val && val != -1) {
        l1.push_back(val);
    }

    while (cin >> val && val != -1) {
        l2.push_back(val);
    }


    if (isSame(l1, l2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
