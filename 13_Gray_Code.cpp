#include<bits/stdc++.h>

using namespace std;

string br(int n,int nb){
	string ans="";
	while(n>0){
		if((n&1)==0)ans.push_back('0');
		else ans.push_back('1');
		n=(n>>1);
	}
	int x=ans.size();
	for(int i=x;i<nb;i++)ans.push_back('0');	
	reverse(ans.begin(),ans.end());
	return ans;
	
}

int main(){
	int n;
	cin>>n;
	
	cout<<br(0,n)<<endl<<br(1,n)<<endl;
		
	int ul=pow(2,n);
	for(int i=2;i<ul;i++){
		cout<<br(i^(i>>1),n)<<endl;
	}
	return 0;
}
