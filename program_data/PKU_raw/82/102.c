int main()
{
    int i,j,k[100],l,n,m;
	struct
	{
		int a;
		int b;
	}
	q[100];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d %d",&q[i].a,&q[i].b);
	}
	for(i=0;i<=99;i++)
		k[i]=0;
	l=0;
	for(i=0;i<=n-1;i++)
	{
		if(q[i].a<=140&&q[i].a>=90&&q[i].b>=60&&q[i].b<=90)
			k[l]+=1;
		else
		{
			l+=1;
		}
	}
	m=0;
	for(i=0;i<=l+1;i++)
	{
		if(m<k[i])
			m=k[i];
	}
	printf("%d",m);
	return 0;
}


