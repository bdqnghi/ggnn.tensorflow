/*
 * a3.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */

/*
 * 3.cpp
 *
 *  Created on: 2011-12-31
 *      Author: 2011
 */
int main()
{
	int a[100]={0},i=0,n,b=1;
	cin>>n;
	if(n<32){
		for(i=0;i<n;i++){
			b*=2;
		}
		cout<<b<<endl;
	}
	else{
		a[0]=2;
		int len=1,j=0;
	for(i=1;i<n;i++)
	{
		for(j=0;j<len;j++)
			a[j]=a[j]*2;
		for(j=0;j<len;j++)
			if(a[j]>=10){
				a[j+1]++;
				a[j]=a[j]-10;
		}
		if(a[len]!=0)len++;
	}
	for(i=len-1;i>=0;i--)cout<<a[i];
	//}
	cout<<endl;}
	return 0;
}
