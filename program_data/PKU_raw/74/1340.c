int huiwen(int m, int n)
{   if(m==0)
        return(n);
    else 
		return(huiwen(m/10,n*10+m%10));
}
void main()
{
	int m,n,i,j,p=0,q=1,a[10000],b[10000],c[10000]={0},x=1;
	scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				p++;
		}
        if(p==0)
		{
			a[q++]=i;
		}
		p=0;
	}
	for(i=1;i<=q-1;i++)
	{
		b[i]=huiwen(a[i],0);
		if(b[i]==a[i])
		{
		    c[x]=b[i];
			x++;
		}
	}
	if(x!=1)
	{
	for(i=1;i<=x-2;i++)
		printf("%d,",c[i]);
	printf("%d",c[i]);}
	if(x==1)
		printf("no");
}