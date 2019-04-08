/*
 * 1.cpp
 *
 *  Created on: 2012-11-3
 *      Author: AK
 */
int main(){
	int a[510];                     //????
	int n,x,i=0,j;
	cin>>n;                         //?????
	for(;n>=1;n--){
		cin>>x;
		if(x%2==1) {a[i]=x;i++;}    //??????????
	}
	for(x=1;x<=i-1;x++)             //??????????
		for(j=i-1;j>=x;j--)
		{
			if(a[j]<a[j-1]){n=a[j-1];a[j-1]=a[j];a[j]=n;}
		}
	cout<<a[0];                    //??
	for(j=1;j<=i-1;j++){
		cout<<','<<a[j];
	}
	return 0;
}