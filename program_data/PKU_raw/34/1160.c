/*
 * 247.cpp
 *
 *  Created on: 2011-12-22
 *      Author: think
 */
int jishu(int n){
	cout<<n<<"*3+1="<<3*n+1<<endl;
	return 3*n+1;
}
int oushu(int n){
	cout<<n<<"/2="<<n/2<<endl;
	return n/2;
}
int main(){
	int n;
	cin>>n;
	for(;n!=1;){
		if(n%2!=0){
			n=jishu(n);
		}
		else n=oushu(n);
	}
	cout<<"End"<<endl;
	return 0;
}
