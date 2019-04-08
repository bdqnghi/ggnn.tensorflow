/*
 *100022.cpp
 *????????????a?????
 *Created on: 2012-10-13
 *Author:??
 */
int shuchu[20];//????
int shuru[100];
int n=0,i=0,k=0;
int main(){
	cin>>n;
	for(k=0;k<n;k++){//????
		cin>>shuru[k];
		cout<<endl;
	}
	shuchu[0]=1;
	shuchu[1]=1;
	for(i=2;i<20;i++){//????
		shuchu[i]=shuchu[i-1]+shuchu[i-2];
	}

	for(k=0;k<n;k++){
		cout<<shuchu[shuru[k]-1]<<endl;
	}
return 0;
}
