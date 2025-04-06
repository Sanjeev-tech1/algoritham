#include<iostream>
using namespace std;
  
int main () {
  
  int  n=10;
  int px=n/2;
  int py=n/2;

  //loop
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            if((i==1 || i==n )&&j==n/2){
                cout<<"* ";
            }
                else if(j==px){
                    cout<<"/";
                }
                else if(j==py){
                    cout<<"\\";
                }
                else{
                    cout<<" ";
                }

            
        }
        if(i==n/2){
            int t=px;
            px=py;
            py=t;
        }else{
            px--;
            py++;
        }
        cout<<endl;
    }
return 0;
}