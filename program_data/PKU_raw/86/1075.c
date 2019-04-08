/*
 * 123.cpp
 *
 *  Created on: 2010-12-18
 *      Author: 378073652
 */


int main(){
	int n,m,i,j,a,s=0,num=60;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>m;
		for(j=1;j<=m;j++){
			cin>>a;
			if(a+s<=57) {s=s+3;num=num-3;}
			if(a+s==58||a+s==59||a+s==60) num=a;
			
			
		}
		cout<<num<<endl;
		num=60;
		s=0;
	}
}
