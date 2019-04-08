void main()
{
	long int m, n, j, t, r, ss(long int x), hw(long int y);
	long int hwss[100]={0};
	scanf("%ld%ld", &m, &n);
	t = 0;
	for(j=m; j<=n; j++)
	{
		if(j==1)
			continue;
		else
		{
		    if(ss(j)==1&&hw(j)==1)
		    {
			hwss[t] = j;
		 	t = t+1;
		    }

		    else
			   continue;
		}
	}
	if(hwss[0]!=0)
	{
		for(t=0; hwss[t+1]!=0; t++)
		{printf("%ld,", hwss[t]);}
		printf("%ld", hwss[t]);

	}
	else
		printf("no");

}

long int ss(long int x)
{
	long int i, z1;
	z1 = 1;
	for(i=2; i<=x/2;i++)
	{
		if(x%i==0)
		{z1 = 0;break;}
		else
		{continue;}
     }
	return(z1);
}

long int hw(long int y)
{
	long int z2, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	a1 = y/1e9;
	a2 = (y-a1*1e9)/1e8;
	a3 = (y-a1*1e9-a2*1e8)/1e7;
	a4 = (y-a1*1e9-a2*1e8-a3*1e7)/1e6;
	a5 = (y-a1*1e9-a2*1e8-a3*1e7-a4*1e6)/1e5;
	a6 = (y-a1*1e9-a2*1e8-a3*1e7-a4*1e6-a5*1e5)/10000;
	a7 = (y-a1*1e9-a2*1e8-a3*1e7-a4*1e6-a5*1e5-a6*10000)/1000;
	a8 = (y-a1*1e9-a2*1e8-a3*1e7-a4*1e6-a5*1e5-a6*10000-a7*1000)/100;
	a9 = (y-a1*1e9-a2*1e8-a3*1e7-a4*1e6-a5*1e5-a6*10000-a7*1000-a8*100)/10;
	a10 = y-a1*1e10-a2*1e9-a3*1e8-a4*1e7-a5*1e5-a6*10000-a7*1000-a8*100-a9*10;
	if(a1!=0)
	{
		if(a1==a10&&a2==a9&&a3==a8&&a4==a7&&a5==a6)
			z2 = 1;
		else 
			z2 = 0;
	}
	else if(a2!=0)
	{
		if(a2==a10&&a3==a9&&a4==a8&&a5==a7)
			z2 = 1;
		else
			z2 = 0;
	}
	else if(a3!=0)
	{
		if(a3==a10&&a4==a9&&a5==a8&&a6==a7)
			z2 = 1;
		else
			z2 = 0;
	}
	else if(a4!=0)
	{
		if(a4==a10&&a5==a9&&a6==a8)
			z2 = 1;
		else
			z2 = 0;
	}
	else if(a5!=0)
	{
		if(a5==a10&&a6==a9&&a7==a8)
			z2 = 1;
		else
			z2 = 0;
	}
	else if(a6!=0)
	{
		if(a6==a10&&a7==a9)
			z2 = 1;
		else
			z2 = 0;
	}
	else if(a7!=0)
	{
		if(a7==a10&&a8==a9)
			z2 = 1;
		else
			z2 = 0;
	}
	else if(a8!=0)
	{
		if(a8==a10)
			z2 = 1;
		else
			z2 = 0;
	}
	else if(a9!=0)
	{
		if(a9==a10)
			z2 = 1;
		else
			z2 = 0;
	}
	else
		z2 = 1;
	return(z2);
		
}