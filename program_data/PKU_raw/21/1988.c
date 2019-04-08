int main()
{
	int a[300],q,K;
	int n,i,sum=0,j,k;
	double aver,p,b[300];
	cin>>n;
	for(i=0;i<n;i++)
	{cin>>a[i];
	sum=sum+a[i];}
	aver=(double)sum/n;
	for(i=0;i<n;i++)
	{
		b[i]=fabs(a[i]-aver);
		
	}
	for(j=0;j<n-1;j++)
    {
		for(i=0;i<n-j;i++)
		{
			if(b[i]<b[i+1])
			{
				p=b[i];
				q=a[i];
				b[i]=b[i+1];
				a[i]=a[i+1];
				b[i+1]=p;
				a[i+1]=q;
			}
		}
    }
	for(i=1;i<n;i++)
	{
		if(b[i-1]>b[i])
		{
			K=i-1;
			break;
		}
	}
	for(k=0;k<K;k++)
	{
		cout<<a[k]<<',';
	}
		cout<<a[K]<<endl;
		
return 0;
}




