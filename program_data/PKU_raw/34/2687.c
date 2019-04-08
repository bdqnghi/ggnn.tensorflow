
int even(int a)
{
	int b;
	b=a/2;
	return(b);
}

int odd(int a)
{
	int b;
	b=a*3+1;
	return(b);
}

void main()
{
	int n,m;
	scanf("%d",&n);
	if(n==1)
	{
		printf("End");
		return;
	}
	while(1)
	{
		if(n%2==0)
		{
			m=even(n);
			printf("%d/2=%d\n",n,m);
			n=m;
			if(m==1)
			{
				printf("End");
				break;
			}
		}
		else
		{
			m=odd(n);
			printf("%d*3+1=%d\n",n,m);
			n=m;
			continue;
			if(m==1)
			{
				printf("End");
				break;
			}
		}
	}
}