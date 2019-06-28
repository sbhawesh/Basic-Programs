#include<bits/stdc++.h>
using namespace std;
#define mx 50

void sortString(char array[][mx],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(strcmp(array[j],array[j+1])>0){
                    swap(array[j],array[j+1]);
            }
        }
    }
   /* for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }*/
}

bool binarySearchStr(char array[][mx],int n,string x){
    int high=n-1,low=0,mid;
    bool flag=false;
    while(low<=high){
        mid=(high+low)/2;
        if(x>array[mid]){
            low=mid+1;
        }
        if(x<array[mid]){
            high=mid-1;
        }
        if(x==array[mid]){
            flag=true;
            break;
        }

    }
    return flag;
}

int main(){

    char array[][mx] = {"coded","bhawesh","string","sort","zero","with"};
    int n = sizeof(array)/sizeof(array[0]);
    string x;
    cin>>x;
    sortString(array,n);
    if(binarySearchStr(array,n,x)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }

return 0;
}
