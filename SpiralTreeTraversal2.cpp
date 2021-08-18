#include<bits/stdc++.h>
using namespace std;

int main() {
    int bt[]={12,13,18,6,5,7,10,2,5,19,14,11,3,8,1,21,29,9,5,14,7,6,2,12,11,17,16,15,2,8,18};
    vector<vector<int> > arr;
    int r=0, count=1;
    while(count<32){
        vector<int> tmp;
        int x=count;
        while(x){
            tmp.push_back(bt[r]);
            r++;
            x--;
        }
        arr.push_back(tmp);
        count*=2;
    }
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int l=0, t=0, b=4;
    while(t<=b && arr[t].size()>l){
        for(int i=t;i<=b;i++)cout<<arr[i][l]<<" ";
        l++;
        t++;
        
        if(t<=b && arr[b].size()>l){
            for(int j=l;j<arr[b].size();j++)cout<<arr[b][j]<<" ";
            b--;
        }
        
        if(t<=b && arr[b].size()>l){
            for(int i=b;i>t;i--){
                cout<<arr[i].back()<<" ";
                arr[i].pop_back();
            }
        }
    }
    cout<<endl;

    return 0;
}