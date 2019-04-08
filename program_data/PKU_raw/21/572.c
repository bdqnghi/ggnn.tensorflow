/*
 * 2011-1-9.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main()
{
	int n;
	cin>>n;
	int a[n],i;
	double m,sum=0;
	for (i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	m=sum/n;
	
	int max=a[0],min=a[0];
	for (i=0;i<n;i++)
	{
		if (a[i]>max)
			max=a[i];
	}
	for (i=0;i<n;i++)
		{
			if (a[i]<min)
				min=a[i];
		}
	if ((max-m)==(m-min))
		cout<<min<<','<<max;
	if ((max-m)>(m-min))
		cout<<max;
	if ((max-m)<(m-min))
			cout<<min;
	return 0;

}
