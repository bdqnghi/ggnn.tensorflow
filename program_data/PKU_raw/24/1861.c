void main()
{
	struct p
	{
		int n,l;
	}
	ps[200],r1,r2;
	char s[10000];
	int m,k,i,j;
	gets(s);
	m=strlen(s);
	j=0;ps[0].n=0;ps[0].l=0;
	for(i=0;i<m;i++)
	{
		if(s[i]!=' ')   ps[j].l=ps[j].l+1;
		if(s[i]==' ')
		{
			j=j+1;
			ps[j].n=i+1;
			ps[j].l=0;
		}
	}
	r1=ps[0];r2=ps[0];
		for(i=1;i<=j;i++)
		{
			if(ps[i].l>r1.l)   r1=ps[i];
			if(ps[i].l<r2.l)  r2=ps[i];
		}
	
	
	for(i=r1.n;i<=r1.n+r1.l-1;i++) printf("%c",s[i]);
	printf("\n");
	for(i=r2.n;i<=r2.n+r2.l-1;i++) printf("%c",s[i]);
}
