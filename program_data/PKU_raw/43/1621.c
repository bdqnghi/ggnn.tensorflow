int main()
{
	int n,i,j,w;
	scanf("%d\n",&n);
	w=0;
	int a[32767]={0};
	for(i=3;i<=n-1;i=i+2)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				w++;
		}
		if(w==0)
		{
			a[i]=i;
		}
		w=0;
	}
	for(i=3;i<=n-1;i=i+2)
	{
		for(j=i;j<=n-1;j=j+2)
		{
			if(a[i]+a[j]==n)
				printf("%d %d\n",a[i],a[j]);
	}
	}
	return 0;
}