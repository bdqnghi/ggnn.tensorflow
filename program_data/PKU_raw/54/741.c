/*
 *fenguozi.cpp
 *????????????
 *Created on: 2011-11-11
 *Author:???
 */
int main(){
	int a,n,i,b,k,t=1;
	cin>>n>>k;
	b=n+k;
	while(t==1){//????
		a=b;
		for(i=1;i<=n-1;i++){
			if(a%(n-1)!=0) i=n+1;
			else a=a*n/(n-1)+k;}
		if(i==n) {cout<<a;t=2;}
		b=b+n;
	}
	return 0;
}
