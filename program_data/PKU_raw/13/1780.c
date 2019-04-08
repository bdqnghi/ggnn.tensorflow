/*
 * shuzibuchong.cpp
 *
 *  Created on: 2013-10-30
 *      Author: ???1300012996
 */
int main(){
	int n,i,m;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++){
		cin>>m;a[i]=m;
	}
	for(int ii=0;ii<n;ii++)
		for(int j=ii+1;j<n;j++){
			if (a[j]==a[ii]){a[j]=101;}//???????????????????
		}
	int b=1;//?????
	for(int l=0;l<n;l++){

		if(a[l]<100&&b==1){cout<<a[l];b+=1;}
		else if(a[l]<100&&b!=1)cout<<' '<<a[l];
	}
	return 0;
}
