/*
 * 123.cpp
 *
 *  Created on: 2010-12-18
 *      Author: 378073652
 */


int main(){
	char a[30000],b[30000];
	int c[10000],d[10000],e[1005],la,lb,i,j,sa=0,sb=0,max=0;
	for(i=0;i<=1004;i++) e[i]=0;
	cin>>a;
	cin>>b;
	la=strlen(a);
	lb=strlen(b);
	c[0]=atof(a);
	for(i=0;i<la;i++){
		if(a[i]==',')
		{sa++;c[sa]=atof(a+i+1);}
	}

	d[0]=atof(b);

	for(i=0;i<lb;i++){
			if(b[i]==',')
			{sb++;d[sb]=atof(b+i+1);}
		}

	for(i=0;i<=sa;i++){
		for(j=c[i];j<d[i];j++){
			e[j]=e[j]+1;
		}
	}
	for(i=0;i<1004;i++){
		if(e[i]>max) max=e[i];
	}





	cout<<sa+1<<" "<<max;
}
