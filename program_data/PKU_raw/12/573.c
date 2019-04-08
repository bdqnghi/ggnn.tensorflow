
int main()
{
	int a[16],i,j,s,n;
	for (; ;)
	{
		for (i=0;i<=15;i++) a[i]=0;
		for (i=0;i<=15;i++)
	{
		scanf("%d",&a[i]);
		if (a[i]==0) break;
		if (a[i]==-1) return 0;
	}
	n=i;
	s=0;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
			if (a[j]==2*a[i]) s=s+1;
	}
	printf("%d\n",s);
	}
	return 0;
}
