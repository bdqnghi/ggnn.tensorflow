int main()
{
	int n,a[400],i,j,b[400],count=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	double sum=0,ave,max=0;
	for(i=1;i<=n;i++)
	{
		sum+=a[i];
	}
	ave=sum/n;
	for(i=1;i<=n;i++)
	{
		if(fabs(ave-(double)a[i])>max)
		{
			max=fabs(ave-(double)a[i]);
		}
	}
	for(i=1;i<=n;i++)
	{
		if(max-fabs(ave-(double)a[i])<0.0001)
		{
			count++;
			b[count]=a[i];
		}
	}
	if(count==1)
	{
		
		cout<<b[1];
	}
	else
	{
		for(i=count;i>0;i--)
		{
			for(j=1;j<i;j++)
			{
				if(b[j]>b[j+1])
				{
					swap(b[j],b[j+1]);
				}
			}
		}
		for(i=1;i<count;i++)
		    cout<<b[i]<<',';
	    cout<<b[count];
	}
	
	return 0;
}

		


