/*
 * 206.cpp
 *
 *  Created on: 2011-12-4
 *      Author: think
 */
void print(int n){
	if(n%2==0){
		cout<<n<<"/2="<<n/2<<endl;
	}
	else{
		cout<<n<<"*3+1="<<n*3+1<<endl;
	}
}
int cal(int n){
	if(n==1){
		cout<<"End"<<endl;return 0;
	}
	print(n);
	if(n%2==0)return cal(n/2);
	else return cal(n*3+1);
}
int main(){
	int n;
	cin>>n;
	cal(n);
	return 0;
}
