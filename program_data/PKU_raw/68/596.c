int f(int a)
{
int c=1;
int i;
if(a%2==0)
	c=0;
else
{
	for(i=3;i<=sqrt(a);i=i+2)
		if(a%i==0)
		{
			c=0;
			break;
		}
}
return(c);
}
main()
{
int n;
int j;
int k;
scanf("%d",&n);
for(k=6;k<=n;k=k+2)
{
for(j=2;j<=k/2;j++)
{
	if((f(j)==1)&(f(k-j)==1))
	{
		printf("%d=%d+%d\n",k,j,k-j);
		break;
	}
}
}
}