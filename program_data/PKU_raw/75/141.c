/*
 * zhaopinhuirenshu.cpp
 *
 *  Created on: 2011-12-22
 *      Author: Administrator
 */
int main()
{
	int a[1000],b[1000],time[1000]={0};
	int i=0,k=0,j,max=0;
	do
	{
		cin>>a[i];
		i++;
	}
	while((getchar())!='\n');
	do
	{
		cin>>b[k];
		k++;
	}
	while((getchar())!='\n');
	for (int p=0;p<i;p++)
	{
		for (j=a[p];j<b[p];j++)
		{
			time[j]++;
		}
	}
	for (int p=0;p<1000;p++)
		if (time[p] > max)
		{
			max=time[p];
		}
	cout<<i<<" "<<max<<endl;
	return 0;
}