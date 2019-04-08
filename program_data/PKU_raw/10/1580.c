/*
 * lanjiedaodan.cpp
 *
 *  Created on: 2010-9-29
 *      Author: lz
 */

int main()
{
	int k;
	cin>>k;
	int a[k];
	int num[k];
	int i;
	int j;
	for(i=0;i<k;i++)
		{
		cin>>a[i];
		num[i]=1;
		}
for(i=0;i<k;i++)
	for(j=0;j<i;j++)
		if(a[j]>=a[i])
			if(num[i]<num[j]+1)
				num[i]=num[j]+1;
int max=1;
for(i=0;i<k;i++)
	if(num[i]>max)
		max=num[i];
cout<<max;
return 0;

}
