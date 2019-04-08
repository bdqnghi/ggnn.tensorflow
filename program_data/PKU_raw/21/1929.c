int main()
{
	int n,  count=1, sum=0, i, j, temp,k;
	double aver,temp2;
	double dis[300];
	int a[300];
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	aver=(double)sum/n;
	for(i=0;i<n;i++)
	{
                if(a[i]>aver)
		dis[i]=a[i]-aver;
                else
		dis[i]=aver-a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(dis[i]>dis[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
				temp2=dis[i];
				dis[i]=dis[i+1];
				dis[i+1]=temp2;
			}
		}
	}
	for(i=n-2;i>0;i--)
	{
		if(dis[i]==dis[n-1])
			count++;
	}
k=0;
        for(i=n-1;i>n-count;i--,k++)
	{
		for(j=n-1;j>n-count+k;j--)
		{
			if(a[i]>a[i-1])
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
		}
	}
if(count>=2)
{
	for(i=n-1;i>=n-count+1;i--)
	{
		printf("%d,", a[i]);
	}
        printf("%d", a[n-count]);
}
else
	printf("%d", a[n-count]);
}