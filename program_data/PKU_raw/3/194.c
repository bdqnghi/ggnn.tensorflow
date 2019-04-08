int main()
{
	int n,k,i,j,a[1000],b,q=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		q=0;
		for(j=0;j<n-i-1;j++)
		{
		b=a[i]+a[j+1];
		if(b==k)
		{
			printf("yes\n");
			q++;
		    return 0;
		}
		else
		{
			q=-1;
		}
		}
	}
	if(q==-1)
		printf("no\n");
	return 0;
}


