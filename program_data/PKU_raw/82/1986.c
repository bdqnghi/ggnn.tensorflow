int main()
{
	int n,a[101],b[101],c[101],i,j,s;
	i=1;
	j=0;
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
		{
			j=j+1;
			c[i]=j;
		}
		else
		{
			c[i]=j=0;
		}
		i++;
	}
	s=c[1];
	for(i=1;i<=n;i++)
	{
		if(s<c[i])
		{
			s=c[i];
		}
	}
	printf("%d\n",s);
	return 0;
}