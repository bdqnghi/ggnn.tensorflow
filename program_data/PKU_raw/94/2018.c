/*
 * oddup.cpp
 *
 *  Created on: 2013-10-31
 *      Author: ??
 */
int main(){
	int n,t;cin>>n;int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]%2==0)a[i]=-1;
	}
	for(int jj=1;jj<n;jj++){
       for(int ii=0;ii<n-jj;ii++){
    	   if(a[ii]<0)continue;
    	   if(a[ii+1]<a[ii]){
    		   t=a[ii];a[ii]=a[ii+1];a[ii+1]=t;
    	   }
       }
	}
	int num=1;
	for(int iii=0;iii<n;iii++){
		if(a[iii]<0)continue;
		if(num==1){cout<<a[iii];num++;}
		else cout<<","<<a[iii];
	}
	return 0;
}
