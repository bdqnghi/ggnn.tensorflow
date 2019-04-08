void sort(float c[],int k)
{
	int i,j;
	float t;
	for(i=1;i<=k;i++)
	{
		int m=i;
		for(j=i+1;j<=k;j++)
		{
			if(c[j]<c[i])  m=j;
		}
		if(m!=i)
		{
			t=c[m];c[m]=c[i];c[i]=t;
		}
	}
}


void main()
{
	int n,i,k=0;
	float a[301],sum=0,av,b[301],c[301];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	av=sum/n;
	for(i=1;i<=n;i++)
	{
		if(a[i]>=av)  b[i]=a[i]-av;
		else  b[i]=av-a[i];
	}
	for(i=1;i<=n;i++)
	{
		int res=1,j;
		for(j=1;j<=n;j++)
		{
			if(b[j]>b[i])
			{
				res=0;
				break;
			}
		}
		if(res) 
		{
			k++;
			c[k]=a[i];
		}
	}
	sort(c,k);
	printf("%.0f",c[1]);
	for(i=2;i<=k;i++)
		printf(",%.0f",c[i]);
}
