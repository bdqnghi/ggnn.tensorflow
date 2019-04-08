int main()
{
	int n,i,j,out[100]={0},k=0,t;
	double average,a[300]={0},s=0,max=0;
	cin>>n;//??n
	for(i=0;i<n;i++)
	{
		cin>>a[i];//??????
		s=s+a[i];//??
	}
	for(i=1;i<=n;i++)
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}//????
	average=s/n;//?????
	for(i=0;i<n;i++)
	{
		if(fabs(a[i]-average)>max)
		{
			k=0;
			max=fabs(a[i]-average);
			out[k++]=a[i];
		}
		else  if(fabs(a[i]-average)==max)
		{
			out[k++]=a[i];
		}
	}//??????????out???
	for(i=0;i<k;i++)
	{
		if(i==0)cout<<out[i];
		else cout<<','<<out[i];
	}//??
	return 0;
}