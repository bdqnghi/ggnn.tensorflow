int main()
{
	int n;
	int a[100000];
	int k;
    int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	if(n==1&&a[0]!=k)
	{
        
		printf("%d",a[0]);
		return 0;
	}
	for(i=0;i<n;i++)
	{
	    while(a[i]==k)
		{
			   int j=i;
		       for(j=i;j<n;j++)
			   {
                   if(a[j]!=k)
				   {
					   a[i]=a[j];
					   a[j]=k;
					   break;
				   }
			   }
			   break;
		}

	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=k&&a[i+1]!=k)
		{
			printf("%d ",a[i]);
		}
		else if(a[i]!=k&&a[i+1]==k)
		{
			printf("%d",a[i]);
		}
		else if(a[i]==k)
		
		{
			break;
		}
	}
	return 0;
}
