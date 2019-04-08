/*
 * jiaogu.cpp
 *
 *  Created on: 2012-11-26
 *      Author: dell
 */
void solve(int n){
	if(n%2==1 && n!=1){
		cout<<n<<"*"<<3<<"+"<<1<<"="<<n*3+1<<endl;
		n=n*3+1;
	}
	if(n%2==0){
		cout<<n<<"/"<<2<<"="<<n/2<<endl;
		n=n/2;
	}
	if(n!=1){
		solve(n);
	}
	if(n==1){cout<<"End";}//????????
}
int main(){
	int n;
	cin>>n;
	solve(n);
	return 0;
}//??n?????????????
