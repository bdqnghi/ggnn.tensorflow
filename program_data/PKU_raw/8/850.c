/*
 * mokuai.cpp
 *
 *  Created on: 2012-11-25
 *      Author: wangyinzhi
 */

int f(int x,int y){
	int a[x],b[y];
	int t,i,j;
	for( i=0;i<x;i++){
		cin>>a[i];}
	for(j=0;j<y;j++){
			cin>>b[j];}//??

	for(i=0;i<x-1;i++){
		for(j=0;j<x-1-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;//????
			}
		}
	}
	for(i=0;i<y-1;i++){
		for(j=0;j<y-1-i;j++){
			if(b[j]>b[j+1]){
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;//????
			}
		}
	}
	for(i=0;i<x;i++){
		if(i==0)cout<<a[i];
		else cout<<" "<<a[i];
	}
	for(i=0;i<y;i++){
       cout<<" "<<b[i];//????
	}
}

int main(){
	int x,y;
	cin>>x>>y;
	f(x,y);//??
	return 0;
}
