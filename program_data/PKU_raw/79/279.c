int function(int n,int m)
{
	int a[1000];
	int i,j,k,s;
    for(i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	i=-1;
	for(s=n;s>1;s--)
	{
		i=(i+m) % s;
		k=a[i];
		for(j=i+1;j<n;j++)a[j-1]=a[j];
		{
			a[n-1]=k;
		}
		i--;
	}

	return a[0];
}
void main()
{
	int n,m,l,i,king[100];
	l=0;
	while(1)
	{
		scanf("%d %d",&n,&m);		
		if(m==0 && n==0)
		{
			break;
		}
		king[l++]=function(n,m);
	}
	for(i=0;i<l;i++)
	{
		printf("%d\n",king[i]);
	}
}