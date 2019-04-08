
void main()
{
	int a,b,x,m,n,i,j,p=0,s,sign;
	double k;
	scanf("%d %d",&m,&n);
	i=m;
	for(i=m;i<=n;i++)
	{
//		printf("i:%d  ",i);
		x=0;
		a=i;
		s=i;
		for(;a!=0;)
		{
			b=a%10;
			x=10*x+b;
			a=a/10;
		}
		if(x==s)
		{
	//		printf(" huiwen");
			sign =0;
			k=sqrt(x);
			for(j=2;j<=k;j++)
			{
				if(x%j==0)
				{
					sign = 1;
					break;
				}
			}
			if(sign == 0)
			{
	//			printf(" prime");
				p++;
				if (p==1)
					printf("%d",x);
				else if (p>1)
					printf(",%d",x);
				
			}
		}
	}
	if(p==0)
		printf("no");
}