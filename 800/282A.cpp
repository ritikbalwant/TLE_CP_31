#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;

    while(n--){
    string s;
    cin >> s;
    if(s=="++X" || s=="X++"){
        count++;
    }
    else if(s=="--X" || s=="X--"){
        count--;
    }
    }

    cout << count << '\n';
    return 0;
}