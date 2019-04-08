int zh(int x);
int h(int x);
void main()
{
	int m,n,i,d=0,a[1000];
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(h(i)&&zh(i))
		{
			a[d]=i;
			d++;
		}
	}
	if(d==0) printf("no\n");
	else
	{
		for(i=0;i<d-1;i++)
			printf("%d,",a[i]);
		printf("%d\n",a[d-1]);
	}
}
int zh(int x)
{
	int i=0;
	for(i=2;i<=sqrt(x);i++)
		if(x%i==0)
			break;
	if(i>sqrt(x))
		return(1);
	else return(0);
}
int h(int x)
{
	int m=0,n=x;
	while(n>0)
	{
		m=m*10+n%10;
		n/=10;
	}
	if(x==m)
		return(1);
	else return(0);
}
	