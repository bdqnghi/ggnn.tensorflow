/*
 * 1000012826_??????.cpp
 *
 *  Created on: 2010-12-24
 *      Author: Administrator
 */

int main(){
	int a[501],b[501]={0},c[501]={0};
	int i,j=0,n,m;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++){
		if(a[i]%2==1){
			b[a[i]]=a[i];
			c[a[i]]++;
		}
	}
	for(int k=0;k<501;k++)
		if(b[k]!=0){
			if(c[k]=1){
			cout<<b[k];m=k+1;break;}
			else{cout<<b[k];m=k+1;
				for(i=1;i<c[k];i++)
					cout<<","<<b[k];

			break;}
		}
	for(int k=m;k<501;k++)
		if(b[k]!=0){
			for(int l=0;l<c[k];l++)
				cout<<","<<b[k];
		}
}
