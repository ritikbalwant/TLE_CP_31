#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;
        int count = 0;
        for(auto c:s){
            count++;
        }
        char first= s[0];
        char last= s[count-1];

        if(count<=10){
            cout << s << '\n';
        }
        else cout << first << count-2 << last << '\n';
    }

    return 0;
}