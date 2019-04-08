void main()
{
	int num1(int m,int n);
	int t,m,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&m,&n);
		printf("%d\n",num1(m,n));
	}
}
int num1(int m,int n)
{
	int b,c,z;
	if(m==1||n==1||m==0)
		z=1;
	else
	{
		if(m<n)
			z=num1(m,m);
		else
		{
			b=num1(m,n-1);
		    c=num1(m-n,n);
			z=b+c;
		}
	}
		return(z);
} 