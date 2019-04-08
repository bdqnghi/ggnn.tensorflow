void sort(int a[],int n)
{
	int t,i,j;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
}


int main()
{	
	int n,i,j,sum,k,x;
	int a[1000],b[1000],c[1000],d[1000];
	while(1)
	{
		scanf("%d",&n);
		if(n==0)break;
		sum=0;
		k=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		for(i=0;i<n;i++)
		{
			c[i]=1;
			d[i]=1;
		}
		
		x=a[0];
		for(i=0;i<n;i++)//????????????
		{
			if(a[i]!=x||b[i]!=x)
				break;
		}
		if(i==n)
		{
			
			printf("%d\n",sum);
			continue;
		
		
		}
		sort(a,n);//???a?b??
		sort(b,n);

		for(i=n-1;i>=0;i--)
		{
			for(j=0;j<n;j++)
			{
				if((a[i]>b[j])&&(c[j]!=0))
				{sum+=200;
				k++;
				c[j]=0;
				d[i]=0;
				break;
				}
			}
		}
		sum=sum-(n-k)*200;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(a[i]==b[j]&&c[j]!=0&&d[i]!=0)
				{
					sum+=200;
				c[j]=0;
				d[i]=0;
				}
			}
		printf("%d\n",sum);
	}

		return 0;
}
