int main()
{
	int m,n,i,a,b,c,d,e,f,g;
	scanf("%d",&n);
    m=n;
	a=1;
	b=2;
	c=3;
	if(n==1)
	{
		printf("%s","End");
	}
	else
	{
	 while(n>1)
	 {
		if(n%2==0)
		{
			m=n/2;
			printf("%d%c%d%c%d\n",n,'/',b,'=',m);
			n=m;
		}
		else
		{
			m=n*3+1;
			printf("%d%c%d%c%d%c%d\n",n,'*',c,'+',a,'=',m);
            n=m;
		}
	 }
	printf("%s","End");
	 }
	return 0;
}

