// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> v(n);

    for (auto it : v ){
        v.push_back(it);
    }

    for (auto it : v){
        cout << it << " ";
    }

    cout << '\n';

    return 0;
}