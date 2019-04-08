int P(int x)
{
	int b=1;
	for(int i=2;i<=sqrt(x);i++)
	b*=(x%i!=0);
	if(b==0)
		return 0;
	else
		return 1;

}
main()
{
	int a,b,c,d;
	int n,i,j,k;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
		{
			for(a=2;a<=i/2;a++)
				{
					b=i-a;
					if((P(a)==1)&&(P(b)==1))
						{
							printf("%d=%d+%d\n",i,a,b);
							break;
						}
					
				}
		}

}