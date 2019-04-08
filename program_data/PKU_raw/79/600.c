int choose(int n,int m)
{
	int a[MAX];
	int i,j,k;
	for(i=1;i<=n;i++)
		a[i]=1;
	a[n+1]=0;
	i=0;j=0;k=0;
	while(k<n)
	{
		i++;
		while(a[i]==0)
		{
			i++;
			if(i>n) i=1;
		}
		j++;
		if(j==m)
		{	
			a[i]=0;
			j=0;k++;	
		}
	}
	return i;
}
void main()
{
	int m,n;
	scanf("%d %d",&n,&m);
	while(m!=0||n!=0)
	{
		printf("%d\n",choose(n,m));
		scanf("%d %d",&n,&m);
	}

}

