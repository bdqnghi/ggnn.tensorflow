int main()
{
	int n,i,a,k,p,q,m;
	scanf("%d",&n);
	for (m=6;m<=n;m=m+2)
	{for (a=3;a<=m/2;a=a+2)
	{	p=(int)sqrt(a);
		     q=(int)sqrt(m-a);
	for (i=2;i<=p;i++)
	{if(a%i==0)break;}
	for (k=2;k<=q;k++)
	{	if((m-a)%k==0)break;}
	if (i>p&&k>q)
	{printf("%d=%d+%d\n",m,a,m-a);break;}
	}
	}
	  return 0;
	
}



