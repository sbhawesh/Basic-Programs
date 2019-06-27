#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[]={3,4,1,6,6,6,9,0,5};
   // 0,,1,2,3,4,5,6,9
    int k;
    cin>>k;
    int n=sizeof(array)/sizeof(array[0]);
    set<int>st;
    for(auto x:array){
        st.insert(x);
    }

    unordered_map<int,bool>ump;

    for(auto x:st){
        ump.insert(make_pair(x,false));
    }

    for(auto x:st){

        if(ump.find(k-x)!=ump.end()){
                if(x!=k-x){
                    cout<<x<<","<<k-x<<endl;
                    ump.erase(x);
                }
        }
    }
return 0;
}
