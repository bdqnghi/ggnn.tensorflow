int fun(int m,int a[],int n,int*p)
{
	int*q,i;
	if (n==1)
		return (a[0]);
	else
	{
		p=p-1;
		for(i=1;i<=m;i++)
		{
			if (p==a+n-1)
				p=a;
			else
				p++;
		}
		for(q=p;q<a+n-1;q++)
			*q=*(q+1);
		return (fun(m,a,n-1,p));
	}
}
void main()
{
	int m[100],n[100],i,count,j;
	int*p;
	int a[1000];
	for(i=0;;i++)
	{
		
		scanf("%d%d",&n[i],&m[i]);
		if (n[i]==0)
			break;
	}
	count=i-1;
	for(i=0;i<=count;i++)
	{
		for(j=0;j<1000;j++)
			a[j]=j+1;
		p=a;
		printf("%d\n",fun(m[i],a,n[i],p));
	}
}
