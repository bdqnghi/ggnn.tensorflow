
int checkprime(int x)
{
	int i;
	if (x==2) return 1;
	else
	{
		for (i=2;i<=sqrt(x)+1;i++)
		{
			if (x%i==0) return 0;
		}
		return 1;
	}

}

int zuida(int x,int y)
{
	if (y==1) return 1;
	else
	{
	if (x%y==0) return y;
	else 
	{
	
	return zuida(y,x%y);
	}
	}
}


main ()
{
	int i,j,a[400],n=0,max=0,max1=0;
	char *p,s[1300];
	scanf("%s",s);
	memset(a,0,sizeof(a));
	for (p=s;*p!='\0';p++)
	{
		if (*p==',') n++;
		else 
		{
			a[n]=a[n]*10+(*p-'0');
		}
	}

	if (n==0) 
		{
		printf("No");return 0;
		}
	for (i=0;i<=n;i++)
	{
		if (a[i]>a[max])
			max=i;
	}
	
	for (i=0;i<=n;i++)
	{	
		if (a[i]<a[max])
			break;
	}
	if (i==(n+1)) {printf("No");return 0;}
	else
	{
		max1=i;
	for (j=i;j<=n;j++)
		{
			if (a[j]==a[max]) continue;
			else
			{
			if (a[j]>a[max1])
				max1=j;
			}
		}
	}

	printf("%d",a[max1]);

	return 0;

}


