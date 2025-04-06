#include<iostream>
using namespace std;
  
int main () {
    int i,j;
    int n=7;
    int x=n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==x)
            cout<<"*";
            else
            cout<<" ";
        }
        if(i<=n/2)
        x++;
        else
        x--;
        cout<<endl;
    }
  
  
return 0;
}