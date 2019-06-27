#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[]={2,1,3,5,3,3,5};
    int mx=array[0];
    for(int i=1;i<7;i++){
        if(array[i]>mx){
            mx=array[i];
        }
    }
    int countar[mx];
    memset(countar,0,sizeof(countar));
    for(int i=0;i<7;i++){
        countar[array[i]]+=1;
    }
    for(int i=0;i<=mx;i++){
            if(countar[i]>0)
                cout<<i<<" "<<"Count- "<<countar[i]<<endl;
    }
return 0;
}
