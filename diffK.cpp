#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[]={3,4,1,6,6,6,9,0,5};
   // 0,,1,2,3,4,5,6,9
    int k;
    cin>>k;
    int n=sizeof(array)/sizeof(array[0]);
   // sort(array,array+n);
    set<int>st;
    for(auto x:array){
        st.insert(x);
    }
    //vector<int>arr;
    //copy(st.begin(),st.end(),back_inserter(arr));
    /*n=arr.size();
    int high=n-1,low=n-2;
    while(low>=0){
        if((arr[high]-arr[low])==k){                  //O(nlogn)
            cout<<arr[high]<<","<<arr[low]<<endl;
            low--;
        }
        if((arr[high]-arr[low])>k){
            high--;
        }
        if((arr[high]-arr[low])<k){
            low--;
        }
    }*/

    unordered_map<int,bool>ump;

    for(auto x:st){
        ump.insert(make_pair(x,false));
    }

    for(auto x:st){                          //O(n) approach
        if(ump.find(x+k)!=ump.end()){
                cout<<x<<","<<x+k<<endl;
                ump.erase(x);
        }
        if(ump.find(x-k)!=ump.end()){         // For sum = k find(k-x)
                cout<<x<<","<<x-k<<endl;
                ump.erase(x);
        }
    }
return 0;
}
