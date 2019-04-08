int judge(int n)
{
	int m=1,a,i;
	for(i=1;i<=n;i=i*10) m=i;
	if(n<10) a=n;
	else a=n%10*m+judge(n/10);
	return a;
}
int su(int n)
{
	int i,m=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0) m++;
	}
	if(m>0) return 0;
	else return 1;
}
int main()
{
	int m,n,i,j,t;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		t=0;
		if(i%2==1&&judge(i)==i&&su(i))
		{
			printf("%d",i);
		    for(j=i+1;j<=n;j++)
			{
			    if(j%2==1&&judge(j)==j&&su(j)) t++;
			}
		    if(t>0) printf(",");
		}
	}
	t=0;
	for(i=m;i<=n;i++)
	{
		if(i%2==1&&judge(i)==i&&su(i)) t++;
	}
	if(t==0) printf("no");
}