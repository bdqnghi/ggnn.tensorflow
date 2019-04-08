/*
 * j1.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main()
{
	int n,i,r,p=0;
	cin>>n;
	double sum=0.0,a[301];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}
	double b=sum/n;
	double d=fabs(a[0]-b),max=a[0];
	for(i=1;i<n;i++)
		if(fabs(a[i]-b)>=d)
			{
				d=fabs(a[i]-b);
				max=a[i];
				r=i;
			}
	for(i=0;i<r;i++)
		if(fabs(a[i]-b)==d)
		{
			p++;
			if(a[i]<max)
				cout<<a[i]<<','<<max;
			else cout<<max<<','<<a[i];
		}
	if(p==0) cout<<max;
	return 0;
}