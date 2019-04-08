
int main()
{
	int count,a[300],n,m,i,exist;
	while(1)
	{
	scanf("%d%d",&n,&m);
	if (n==0&&m==0) break;
	exist=n;
	for (i=0;i<n;i++)
		 a[i]=1;
	i=0;count=0;
	while(exist>1)
	{
		if(a[i]!=0) {count++;}
		if (count==m) {a[i]=0;exist--;count=0;}
		i++;
		if (i==n) i=0;
	}
	for (i=0;i<n;i++)
		 if (a[i]!=0) printf("%d\n",i+1);
	}
	return 0;
}