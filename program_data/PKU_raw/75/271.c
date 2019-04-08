int main()
{
	int a[1000],n,m,s,c[1000],t[1000];
	char b=',';
	for(n=0;b==',';n++)
	{
		scanf("%d",&a[n]);
		b=getchar();
	}
	scanf("\n");
	b=',';
	for(n=0;b==',';n++)
	{
		scanf("%d",&c[n]);
		b=getchar();
	}
	printf("%d ",n);
	for(m=0;m<1000;m++)
	{
		t[m]=0;
		for(s=0;s<n;s++)
		if(m>=a[s]&&m<c[s])t[m]++;
	}
	for(m=0,s=0;m<1000;m++)
	{
		if(s<t[m])s=t[m];
	}
	printf("%d",s);
	return 0;
}