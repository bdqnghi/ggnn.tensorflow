int su(int x)
{
	int i,b=1;
	for (i=2;i<=sqrt(x);i++)
		if (x%i==0) {b=0;break;}
	return(b);
}
int hw(int x)
{
	int n,s=0;
	n=x;
	while (n>0)
	{
		s=s*10+n%10;
		n=n/10;
	}
	if (s==x) return(1);
	else return(0);
}
void main()
{
	int m,n,i,b=0;
	scanf("%d %d",&m,&n);
	for (i=m;i<=n;i++)
		if (su(i))
			if (hw(i))
				if (b==0) {printf("%d",i);b=1;}
				else printf(",%d",i);
	if (b==0) printf("no");
}