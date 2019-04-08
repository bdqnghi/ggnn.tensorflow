void main()
{
	int n,i,j,k,t,a[300],sum=0,s=0;
	float average,b[300],max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)   //????
	{
		k=i;
		for(j=i+1;j<n;j++)
		{
			if(a[k]>a[j]) k=j;
		}
		if(k!=i)
		{
			t=a[i];
			a[i]=a[k];
			a[k]=t;
		}
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	average=(float)sum/n;
	for(i=0;i<n;i++)
	{
		if(a[i]-average>0) b[i]=a[i]-average;
		else if(a[i]-average<=0) b[i]=average-a[i];
	}
	for(i=1,max=b[0],k=1;i<n;i++)
	{
		if(b[i]>=max) 
		{
			max=b[i];
			k=k+1;
		}
	}
	if(k==1)
	{
		for(i=0;i<n;i++)
		{
			if(max==b[i])
			{
				printf("%d\n",a[i]);
			}
		}
	}
	else if(k>1)
	{
		for(i=0,s=0;i<n;i++)
		{
			if(max==b[i])
			{
				if(s==0)
				{
					printf("%d",a[i]);
					s++;
				}
				else if(s!=0)
				{
					printf(",%d",a[i]);
				}
			}
		}
	}
}