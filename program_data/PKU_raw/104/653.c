/*
 *erchashu.cpp
 *?????????????
 *Created on: 2011-11-11
 *Author: ???
 */
int main(){
	int a,b;
	cin>>a>>b;
	while(a!=b){
		if(a>b) a=(a-a%2)/2;//??
		else b=(b-b%2)/2;
	}
	cout<<a<<endl;
	return 0;
}
