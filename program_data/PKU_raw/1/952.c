/*
 * 1118-4.cpp
 *
 *  Created on: 2011-11-29
 *      Author: Administrator
 */
int divide(int n,int a){
	int s=0,t=0,i;
	if(n==1) return 1;
	for(i=a;i>1;i--)
		if(n%i==0){
			s+=divide(n/i,i);
			t++;
		}
	if(t==0) return 0;
	return s;
}
int main(){
	int n,k;
	cin>>k;
	while(k>0){
	cin>>n;
	cout<<divide(n,n)<<endl;
	k--;
	}
	
	return 0;
}
