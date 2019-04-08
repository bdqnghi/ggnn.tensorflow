void main()
{
	int m,a=3,b,i,j,z1,z2;
	scanf("%d",&m);
	while (a<=(m/2))
	{
		z1=1;
		for (i=2;i<=(int)(sqrt(a));i++) 
		{
			if (a%i==0) z1*=0;
			else z1*=1;
		}
		if (z1==1) 
		{
			b=m-a;
			z2=1;
			for (j=2;j<=(int)(sqrt(b));j++)
			{
				if (b%j==0) z2*=0;
				else z2*=1;
			}
			if (z2==1) 
				if (a+b==m) printf("%d %d\n",a,b);
		}
		a=a+2;
	}
}

