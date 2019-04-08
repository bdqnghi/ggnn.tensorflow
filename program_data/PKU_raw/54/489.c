/*
 * 1000012712_324.cpp
 *
 *  Created on: 2010-11-21
 *      Author: Administrator
 */
int main(){
	int n,k,i;
	cin>>n>>k;
	int apple[n];
	apple[1]=n+k;
	while(true){
		for(i=2;i<=n;i++){
			apple[i]=(apple[i-1]-k)/n*(n-1);
			if((apple[i]%n!=k)||(apple[i]<n)) break;
	    }
		if(i==n+1)  break;
		else  apple[1]+=n;
	}
	cout<<apple[1]<<endl;
	return 0;
}
