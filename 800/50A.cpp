#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    int area= m*n;

    int ans;

    if(area%2==0){
        ans = area/2;
    }
    else if(area%2!=0){
        ans = (area-1)/2;
    }

    cout << ans << '\n';
    return 0;
}