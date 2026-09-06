#include<iostream>
 
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    int n ;
    while(t--){
        cin >> n;
        char temp[n][n];
        for(int i = 0; i < n;i++){
            for(int j = 0 ; j < n;j++){
                cin >> temp[i][j];
            }
        }
        int res[4];
        int k = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(temp[i][j] == '*'){
                   res[k] = i;
                   res[k+1] = j;
                   k+=2;
                }
            }
        }
 
        if(res[0] != res[2] && res[1] != res[3]){
            temp[res[0]][res[3]] = '*';
            temp[res[2]][res[1]] = '*';
        }else if(res[0] == res[2] && res[0] >=1){
            temp[res[0]-1][res[1]] = '*';
            temp[res[0]-1][res[3]] = '*';
        }else if(res[0] == res[2] && res[0] <1){
            temp[res[0]+1][res[1]] = '*';
            temp[res[0]+1][res[3]] = '*';
        }else if(res[1] == res[3] && res[1] >=1){
            temp[res[0]][res[1]-1] = '*';
            temp[res[2]][res[3]-1] = '*';
        }else if(res[1] == res[3] && res[1] <1){
            temp[res[0]][res[1]+1] = '*';
            temp[res[2]][res[3]+1] = '*';
        }
 
        for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < n ;j++){
                cout << temp[i][j] ;
            }
            cout << "
";
        }
    }
    return 0;
}
 
 
 