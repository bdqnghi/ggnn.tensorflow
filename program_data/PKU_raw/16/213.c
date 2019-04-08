void main()
{
int n,i,c,b;
scanf("%d",&n);
if(n==0)printf("0");
for(i=1;i<=n;)
{
	i=i*10;
	c=n%i;
	n=n-c;
	b=c*10/i;
	printf("%d",b);
}
printf("\n");
}
