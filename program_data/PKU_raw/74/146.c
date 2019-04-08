
int m,n;

int zhi(int n)
{
	int i,t;
	t=n/2;
	for (i=2;i<t;i++)
	{
		if (n%i==0) return 0;
	}
	return 1;
}

int hui(int n)
{
	int temp,h;
	temp=n;
	h=0;
	while (temp>0)
	{
		h=h*10+temp%10;
		temp/=10;
	}
	if (n==h)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int i,flag=1;
	scanf("%d%d",&m,&n);
	for (i=m;i<=n;i++)
	{
		if (hui(i) && zhi(i))
		{
			if (flag!=1)
			{
				printf(",%d",i);
			}
			else
			{
				printf("%d",i);
				flag=0;
			}
		}
	}
if (flag==1)
{
printf("no");
}
//	scanf("%d%d",&m,&n);
	return 0;
}