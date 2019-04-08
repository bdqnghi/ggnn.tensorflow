/*
 * 1.cpp
 *
 *  Created on: 2010-12-29
 *      Author: 10033
 */


int main(){//????
	int n,i,j;
	int a[10],b[10],c[10];//??
	struct zuobiao{//???????????
		int x[2];
		int y[2];
		int z[2];
		float length;
	}number[100],t;
	cin>>n;
	for(i=0;i<n;i++)//??
		cin>>a[i]>>b[i]>>c[i];
	for(i=0;i<n;i++)//????zuobiao???
		for(j=i+1;j<n;j++){
			number[(((n-1)+(n-i))*i/2)+j-i].x[0]=a[i];
			number[(((n-1)+(n-i))*i/2)+j-i].x[1]=a[j];
			number[(((n-1)+(n-i))*i/2)+j-i].y[0]=b[i];
			number[(((n-1)+(n-i))*i/2)+j-i].y[1]=b[j];
			number[(((n-1)+(n-i))*i/2)+j-i].z[0]=c[i];
			number[(((n-1)+(n-i))*i/2)+j-i].z[1]=c[j];
			number[(((n-1)+(n-i))*i/2)+j-i].length=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])+(c[i]-c[j])*(c[i]-c[j]));
		}
	for(i=1;i<=(n-1)*n/2;i++)//????
		for(j=1;j<=(n-1)*n/2-i;j++)
			if(number[j].length<number[j+1].length){
				t=number[j];
				number[j]=number[j+1];
				number[j+1]=t;
			}
	for(i=1;i<=(n-1)*n/2;i++)//??
		cout<<"("<<number[i].x[0]<<","<<number[i].y[0]<<","<<number[i].z[0]<<")-("
		<<number[i].x[1]<<","<<number[i].y[1]<<","<<number[i].z[1]<<")="<<fixed<<setprecision(2)<<number[i].length<<endl;
	return 0;
}//????
