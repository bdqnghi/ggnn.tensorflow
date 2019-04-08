
int main()
{
	int n=0,x[301];
	char c;

	while(1)
	{
		scanf("%d%c",&x[n],&c);
		n++;
		if(c==10) break;
	}

	if(n==1) printf("No\n");
	else
	{
		long a=0,b=0,i;
		for(i=0;i<=n-1;i++)
		{
			if(a<x[i])
			{
				b=a;
				a=x[i];
			}
			else if(a>x[i]&&x[i]>b)
				b=x[i];
		}

		if(a>b&&b>0) printf("%d\n",b);
		else printf("No\n");
	}

	return 0;
}