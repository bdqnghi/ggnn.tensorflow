void main()
{
	int n,k;
	void apple(int x,int y);
	scanf("%d%d",&n,&k);
	apple(n,k);


}
void apple(int x,int y)
{
	int a=1,b,i=2,p=1;
	b=x+y;
	while(i<=x)
	{
		if(b%(x-1)==0)
		{
			a=b/(x-1);
			b=a*x+y;
		i=i+1;}
		else
		{
			p=p+1;

			a=p;
			b=a*x+y;
			i=2;
			
		}

	}
	printf("%d\n",b);
}


	