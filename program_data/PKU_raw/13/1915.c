int main()
{
	int a[20000],n,i,m,r;
	scanf("%d",&n);
	scanf("%d",&a[1]);
	printf("%d",a[1]);
	for(i=2;i<=n;i++)
	{
		r=0;
		scanf("%d",&a[i]);
        for(m=1;m<i;m++)
		{
			if(a[i]==a[m])
				r++;
		}
		if(r==0)
			printf(" %d",a[i]);
	}
	printf("\n");
	return 0;
}