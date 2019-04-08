


char stack[MAX];
int count=0;

int isprime(int n)
{
	return stack[n];
}


void makechart(int n)
{
	int i,j;
memset(stack,1,sizeof(char)*(n+1));
stack[1]=0;
	for (i=2;i<n;i++)
	{        if(stack[i]==0) continue;


		for (j=2;j*i<=n;j++) 
		{
	    	stack[i*j]=0;
		}
	}
}

int main()
{
	int n;
	int i,j;
	scanf("%d",&n);
	makechart(n);
	for (i=6;i<=n;i+=2)
	{
		for (j=2;j+j<=i;j++)
		{
			if (isprime(j)&&isprime(i-j))
			{
				printf("%d=%d+%d\n",i,j,i-j);
			break;
			}
		}
	}
	return 0;
}


