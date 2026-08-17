#include<iostream>
#include<vector>
#include<cctype>
#include<algorithm>
#include<string>
//4:04
using namespace std ;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
int d;
cin >> d;
int SumTime;
cin >> SumTime;
 
vector<int> minT;
vector<int> maxT;
vector<int> res;
int avg = SumTime/d;
int summin = 0;
int summax = 0;
while(d--){
    int ele;
    cin >> ele;
    minT.push_back(ele);
    summin+=ele;
    int ele1;
    cin >> ele1;
    maxT.push_back(ele1);
    summax += ele1;
}
if(SumTime < summin || SumTime > summax) { cout << "NO
";
return 0;
}
 
for(int i = 0 ; i < minT.size() ; i++){
    res.push_back(minT[i]);
    SumTime -= minT[i];
}
 
int i = 0;
while(i < minT.size() && SumTime > 0){
    int space = maxT[i] - minT[i];
    int toadd = min(SumTime , space);
    res[i] += toadd;
    SumTime -= toadd;
 i++;
}
if(SumTime ==0 ){
     cout << "YES
";
for( int i = 0 ; i < res.size() ; i++){
    cout << res[i] <<" ";
}
}
else cout << "NO
";
 
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
// int cd = abs(minT[minT.size() -1] - maxT[maxT.size() -1]);
 
// for( int i = 0 ;i < minT.size() ; i++){
//     if(maxT[i] < avg){
//         SumTime -= maxT[i];
//         res.push_back(maxT[i]);
//     }else{
        
//         if(i < minT.size()-1){
//         res.push_back(minT[i]);
//         } else{
//             res.push_back(SumTime);
//         }
//         SumTime -= minT[i];
//     }
// }
 
// if(SumTime <=cd){
//      cout << "YES
";
// for( int i = 0 ; i < res.size() ; i++){
//     cout << res[i] <<" ";
// }
// }
// else cout << "NO
";
// }
 
 