int main()
{
	int a,b,c,d,e,f,n,i,k;
	scanf("%d%d%d",&a,&b,&c);
	scanf("%d%d%d",&d,&e,&f);
	n=0;
	k=0;
	for (i=a;i<=d-1;i++)
	{
		if ((i%4==0 && i%100!=0)||(i%400==0))
		{
			k=k+1;
		}
	}
	n=(d-a)*365+k;
	if  ((d%4==0 && d%100!=0)||(d%400==0))
	{
		switch (e)
		{
		case 1: n=n;break;
		case 2: n=n+31;break;
		case 3: n=n+31+29;break;
		case 4: n=n+31+29+31;break;
		case 5: n=n+31+29+31+30;break;
		case 6: n=n+31+29+31+30+31;break;
		case 7: n=n+31+29+31+30+31+30;break;
		case 8: n=n+31+29+31+30+31+30+31;break;
		case 9: n=n+31+29+31+30+31+30+31+31;break;
		case 10:n=n+31+29+31+30+31+30+31+31+30;break;
		case 11:n=n+31+29+31+30+31+30+31+31+30+31;break;
		case 12:n=n+31+29+31+30+31+30+31+31+30+31+30;break;
		}
	}
	else
	{
	switch (e)
		{
		case 1: n=n;break;
		case 2: n=n+31;break;
		case 3: n=n+31+28;break;
		case 4: n=n+31+28+31;break;
		case 5: n=n+31+28+31+30;break;
		case 6: n=n+31+28+31+30+31;break;
		case 7: n=n+31+28+31+30+31+30;break;
		case 8: n=n+31+28+31+30+31+30+31;break;
		case 9: n=n+31+28+31+30+31+30+31+31;break;
		case 10:n=n+31+28+31+30+31+30+31+31+30;break;
		case 11:n=n+31+28+31+30+31+30+31+31+30+31;break;
		case 12:n=n+31+28+31+30+31+30+31+31+30+31+30;break;
		}	
	}
	
	if  ((a%4==0 && a%100!=0)||(a%400==0))
	{
		switch (b)
		{
		case 1: n=n;break;
		case 2: n=n-31;break;
		case 3: n=n-31-29;break;
		case 4: n=n-31-29-31;break;
		case 5: n=n-31-29-31-30;break;
		case 6: n=n-31-29-31-30-31;break;
		case 7: n=n-31-29-31-30-31-30;break;
		case 8: n=n-31-29-31-30-31-30-31;break;
		case 9: n=n-31-29-31-30-31-30-31-31;break;
		case 10:n=n-31-29-31-30-31-30-31-31-30;break;
		case 11:n=n-31-29-31-30-31-30-31-31-30-31;break;
		case 12:n=n-31-29-31-30-31-30-31-31-30-31-30;break;
		}
	}
	else
	{
	switch (b)
		{
		case 1: n=n;break;
		case 2: n=n-31;break;
		case 3: n=n-31-28;break;
		case 4: n=n-31-28-31;break;
		case 5: n=n-31-28-31-30;break;
		case 6: n=n-31-28-31-30-31;break;
		case 7: n=n-31-28-31-30-31-30;break;
		case 8: n=n-31-28-31-30-31-30-31;break;
		case 9: n=n-31-28-31-30-31-30-31-31;break;
		case 10:n=n-31-28-31-30-31-30-31-31-30;break;
		case 11:n=n-31-28-31-30-31-30-31-31-30-31;break;
		case 12:n=n-31-28-31-30-31-30-31-31-30-31-30;break;
		}	
	}
	n=n-c+f;
	printf("%d",n);
	return 0;
}