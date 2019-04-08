
void main()
{
	int b[301],a[301],i,n,*p1,*p2,*p3,*p4;
	scanf("%d",&n);
	p1=a;
	for (i=0;i<n;i++)
		scanf("%d",p1+i);
	p3=b;
	for (p1=a;p1<a+n;p1++)
	{
		for (p2=a;p2<p1;p2++)
			if (*p1==*p2) break;
		if (p1==p2) 
		{
			*p3=*p1;
			p3++;
		}
	}
	for (p4=b;p4<p3-1;p4++)
		printf("%d,",*p4);
	printf("%d\n",*p4);
}

