#include <iostream>
using namespace std;
int main(){
    int n,c,x = 1,y = 1; cin>>n;
    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

     c=a[0][0];
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

            if(c<a[i][j]){
                c=a[i][j];
                x=i+1;
                y=j+1;
                }

    }

}cout<<x<<" "<<y;
}