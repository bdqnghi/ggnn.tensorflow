
/*
 * ?7???????.cpp
 *
 *  Created on: 2010-11-19
 *      Author: taoshibo
 */
int main()
{
	int n,i,sum=0;
	cin>>n;
	int a[n+1];
	for(i=1;i<n+1;i++){
		if((i%7==0)||(i==17)||(i==27)||(i==37)||(i==47)||(i==57)||(i==67)||(i==87)||(i==97)||(i>=70&&i<=79)){

			a[i]=0;
		}
		else a[i]=i*i;
		//cout<<a[i]<<endl;
	}
	for(i=1;i<n+1;i++)
		sum=sum+a[i];
	cout<<sum<<endl;










	return 0;
}
