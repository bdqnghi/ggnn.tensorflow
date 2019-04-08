int judge(int n)
{
	int a=1,i;
	for(i=2;i<=sqrt(n);i++)
    if(n%i==0)
		a=0;
    return (a);
}
int main()
{
	int n,m,i,t,j,s=0,k,b[100],l=0,p;
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
		k=i;
		if(judge(k)==1)
		{
			t=i;
			j=0;
			while(t>0)
			{
				j=j*10+t%10;
				t/=10;
			}
			if(j==i)
			{
				s=1;
				b[l]=i;
				l++;
				p=l;
			}
		}
	}
	if(s==1)
	{
		for(l=0;l<p-1;l++)
			printf("%d,",b[l]);
		printf("%d\n",b[l]);
	}
	if(s==0) printf("no\n");
	return 0;
}
