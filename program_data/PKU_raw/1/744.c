/*
 * 187.cpp
 *
 *  Created on: 2011-11-22
 *      Author: think
 */
int count(int a,int n){
	if(a>n)return 0;
	if(a==n)return 1;
	int p=1;
	int i;
	for(i=a;i<=n;i++){
		if(n%i==0&&i<=n/i){
			p=p+count(i,n/i);
		}
	}
	return p;
}
int geshu(int N){
	int i;
	int s=1;
	for(i=2;i<=sqrt(N);i++){
		if(N%i==0){
			s=s+count(i,N/i);
		}
	}

	return s;
}
int main(){
	int N;
	cin>>N;
	int c[N];
	int j;
	for(j=0;j<N;j++){
		cin>>c[j];
	}
	for(j=0;j<N;j++){
		cout<<geshu(c[j])<<endl;
	}
	return 0;
}
