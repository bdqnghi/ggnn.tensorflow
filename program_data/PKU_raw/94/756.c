int main()
{
	int n,i,a[1000],t,s=0,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
		{if(a[j]<a[i]){t=a[j];a[j]=a[i];a[i]=t;}}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			if(s==0)
			{s=1;printf("%d",a[i]);}
			else
				printf(",%d",a[i]);
		}
	}
	return 0;
}

