
int f(int);
void main()
{
	int n,i,a,b;
	scanf("%d",&n);
	for(i=6;i<=n;i+=2)
	{
		for(a=3;a<=i/2;a+=2)
		{
			b=i-a;
			if(f(a)==1&&f(b)==1)
			{
				printf("%d=%d+%d\n",i,a,b);
				break;
			}
		}
	}
}
int f(int a)
{
	int t,j,sum=0;
	for(j=3;j<=sqrt(a);j+=2)
	{
		if(a%j==0)
		{
			sum++;
		}
	}
	if(sum==0)
	{
		t=1;
	}
	else
	{
		t=0;
	}
	return t;
}