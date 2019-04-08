int main()
{
	int m,n,i,j;
	float a,b,c,s,d;
	scanf("%d",&m);
	j=1;
	while(j<=m)
	{
		scanf("%d\n",&n);
		i=1;
		a=1,b=2;
		s=0;
		while(i<=n)
		{
			c=b/a;
			s=s+c;
			d=b;
			b=a+b;
			a=d;
			i++;}
		printf("%.3f\n",s);
		j++;}
	return 0;
}
