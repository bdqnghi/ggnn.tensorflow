/*
 * 1000012730_25.cpp
 *  ????????
 *  Created on: 2010-10-29
 *      Author: ???
 */

int main(){
	int n,i,k,m=0;                     //n?????????i??????k??????
	cin>>n;                            //??n
	int a[n];
	for(i=1;i<=n;i++)                  //??a[i]
		cin>>a[i];
	cin>>k;
	for(i=1;i<=n;i++)
	{
		if(a[i]==k)
		{
			for(int j=i;j<=n;j++)
				a[j]=a[j+1];
			i=i-1;
			m=m+1;                      //m???????????
		}
	}
	for(i=1;i<=n-m-1;i++)
		cout<<a[i]<<' ';
	cout<<a[n-m];
	return 0;
}
