/*
 * ?????.cpp
 *
 *  Created on: 2010-11-28
 *      Author: Administrator
 */

int f(int n){
	int m=1;
	for(int i=0;i<n;i++)
		m=m*n;
	return m;//????
}
int main(){
	int n,k;
	cin>>n>>k;
	if(n==2)cout<<(3+4*k);//n?????
	else cout<<f(n)-k*(n-1);//n??????
	return 0;

}
