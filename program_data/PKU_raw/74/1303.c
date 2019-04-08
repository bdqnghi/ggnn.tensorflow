int is_huiwen(long x)
{
	long r=0,xx;
	xx=x;
	while (xx!=0)
	{
		r=r*10+xx%10;
		xx=xx/10;
	}
	if (r==x) return 1;
	else return 0;
}
int is_sushu(long x)
{
	int y,f=1;
	if (x==2) return 1;
	else if (x%2==0) return 0;
	else
	{
		for (y=3;y<=(int)sqrt(x);y+=2)
			if (x%y==0) f*=0;
		return f;
	}
}
void main()
{
	long m,n,a,num[50];
	int i,f=-1;
	scanf("%d%d",&m,&n);
	for (a=m;a<=n;a++)
		if (is_sushu(a) && is_huiwen(a))
		{
			f++;
			num[f]=a;
		}
	if (f==0) printf("%d",num[0]);
	else if (f>0)
	{
		printf("%d",num[0]);
		for (i=1;i<=f;i++)
			printf(",%d",num[i]);
	}
	else printf("no");
}
