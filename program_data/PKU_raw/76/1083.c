int main()
{
	int i,j,n,c1,c2,min,max,t=0;
	int a[50000],b[50000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				c1=a[j+1];
				a[j+1]=a[j];
				a[j]=c1;
				c2=b[j+1];
				b[j+1]=b[j];
				b[j]=c2;
			}
		}
	}
	min=a[0];
	max=b[0];
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{
			t++;
		}else if(max<b[i])
		{
			max=b[i];
		}
	}
	if(t>0)
	{
		printf("no");
	}else{
		printf("%d %d",min,max);
	}
	return 0;
}
