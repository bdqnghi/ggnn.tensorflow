int main()
{
	int f(char x);
	char x[100],z[100],w;
	int y[100];
	int a,b,c,d,j,k,sum=0,i,t=0;
	scanf("%d",&a);
	scanf("%s",x);
	scanf("%d",&b);
	c=strlen(x);
	for(i=c-1;i>=0;i--)
	{
		y[i]=f(x[i]);
		sum+=(int)(y[i]*pow(a,c-i-1));
	}
	if(sum==0)
		printf("0");
	else
	{
		for(i=1;i<=1000;i++)
		{
			if(sum<pow(b,i))
				{
					d=i-1;
					break;
				}
		}
	for(j=d;j>=0;j--)
	{
		for(k=1;k<=b;k++)
		{
			if(sum>=k*pow(b,j))
				continue;
			else
			{
				if(k<11)
					w=k+47;
				else
					w=k+54;
				z[t]=w;
				sum-=(int)((k-1)*pow(b,j));
				t=t+1;
				break;
			}
		}
	}
	for(i=0;i<t;i++)
	{
		printf("%c",z[i]);
	}
	printf("\n");
	}
	return 0;
}
int f(char x)
{
	if(islower(x))
		return x-87;
	else
		if(isupper(x))
			return x-55;
		else
			return x-48;
}
