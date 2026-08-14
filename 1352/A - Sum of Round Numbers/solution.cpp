#include<iostream>
#include<vector>
#include<cctype>
#include<algorithm>
#include<string>
#include<math.h>
 
//13:27
using namespace std ;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin >> t;
while(t--){
    int n ;
    cin >> n;
    vector<int> res;
int k = 0;
int i = 0;
int mul = 1;
    while(n > 0){
    int rem = n%10;
    if(rem != 0){
        k++;
       
        int dig = rem*mul ;
        res.push_back(dig);
    }
    n /= 10;
    i++;
    mul *=10;
    }
 
    cout << k << "
";
for(int i = 0 ; i < res.size(); i++){
    cout << res[i] << " ";
}
cout << "
";
}
}