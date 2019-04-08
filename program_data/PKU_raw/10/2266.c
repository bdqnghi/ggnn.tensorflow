void main()
{
	int a[25],d[25];
	int max;
    int i,j,k;
	
	scanf("%d",&k);
	
	for(i=0;i<k;i++)
	{
		scanf("%d",a+i);
	}

	d[k-1]=1;
	for(i=k-2;i>=0;i--)
    {
		max=0;
		for(j=i+1;j<k;j++)
		{
			if(a[i]>=a[j]&&max<d[j])
			{
				max=d[j];
			}
        }
		if(max==0)
		{
			d[i]=1;
		}
        else
		{
			d[i]=max+1;
		}
	}

    for(i=0,max=0;i<k;i++) 
	{
		if(max<d[i])
			max=d[i];
	}
	printf("%d",max);
}
