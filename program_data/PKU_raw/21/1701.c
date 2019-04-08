/*
 * exam.cpp
 *
 *  Created on: 2011-1-9
 *      Author: jsgl
 */
int main()
{
	int n;
	cin>>n;
	int a[500];
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
	int sum=0;
	for(i=0;i<n;i++)
		sum=sum+a[i];
	double average=(double)sum/n;
	double b[500];
	int c[500];
	for(i=0;i<n;i++)
		b[i]=abs(average-a[i]);
	double max=0;
	int k=0;
	for(i=0;i<n;i++)
		if(max<b[i])
		{
			max=b[i];
		}
	for(i=0;i<n;i++)
		if(max==b[i])
			c[k++]=a[i];
	int j;
	for(i=0;i<k-1;i++)
		for(j=0;j<k-i-1;j++)
			if(c[j]>c[j+1])
			{
				int temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
	for(i=0;i<k-1;i++)
		cout<<c[i]<<",";
	cout<<c[i]<<endl;
	return 0;
}
