
int find(int n)
{
	int i;
	for (i=2;i<=sqrt(n);i++)
		if (n%i==0)
			return 0;
	return 1;
}
 
int main()
{
	int a[1000000],i,j=0,n,s=0,ok=1;
	memset(a,0,sizeof(a));
	scanf("%d",&n);
    for (i=1;i<=n;i++)
		if (find(i))
			a[j++]=i;
	for (i=0;i<j;i++)
		if (a[i+1]-a[i]==2)
		{printf("%d %d\n",a[i],a[i+1]);s++;ok=0;}
	if (s==0)
	{printf("empty");ok=0;}
	if (ok)
		printf("^");

	return 0;
}
