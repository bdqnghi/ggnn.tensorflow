/*
 * xiao1.cpp
 *
 *  Created on: 2010-12-24
 *      Author: l
 */

int main(){
	int n;
	cin>>n;
	int a[n];
int j;
for(j=0;j<n;j++)
	cin>>a[j];

	int i,k,s;
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		if(a[i]>a[j])
		{
			s=a[i];
			a[i]=a[j];
			a[j]=s;
		}
	for(k=0;k<i;k++)
		if((a[k]%2)==1)
		{
	cout<<a[k];
	break;
		}
	for(i=k+1;i<n;i++)
		if((a[i]%2)==1)
			cout<<','<<a[i];
	cout<<endl;

	return 0;
}
