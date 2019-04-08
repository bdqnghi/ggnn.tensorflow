int main()
{
	int n,i,j,temp,a[300],sum=0;
	double t,b[300],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	    t=1.0*sum/n;
	for(i=0;i<n-1;i++)
	{
		for(j=n-1;j>i;j--)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
                a[j]=temp;
			}
		}
	}

	for(j=0;j<n;j++)
	{
		if(a[j]>=t)
		{
			b[j]=a[j]-t;
		}
		else
		{
			b[j]=t-a[j];
		}
		 max=b[0];
	    if(b[j]>=max)
		{
			max=b[j];
		}
		else if(b[j]<max)
		{
			max=b[0];
		}
	    
	}
	int mm = 0;
	for(j=0;j<n;j++)
	{

		if (max == b[j])
		{
			if ( mm == 0)
			{
				printf("%d",a[j]);
			}
			else 
			{
				printf(",%d",a[j]);
			}
			mm++;
		}
	}
	
		return 0;
}
