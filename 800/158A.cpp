#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    // for(auto it: v){
    //     cout << it << " ";
    // }
    // cout << '\n';

    int k_value= v[k-1];
    // cout << "k_value is:" << k_value << '\n';

    int count = 0;

    for (auto it: v){
        if(it>=k_value && it !=0){
            count++;
            // cout << "values are: " << it << " ";
        }
    }
    // cout << '\n';
    cout << count << '\n';

    return 0;
}