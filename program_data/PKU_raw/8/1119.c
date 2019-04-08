int m,n;
int a[100],b[100];

void scan()
{
	int i;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
}

void order(int N, int p[100])
{
	int i,j,amount=0;
	int min,max;
	min=p[0];
	max=p[0];
	for(i=0;i<N;i++)
	{
		if(p[i]<min)
			min=p[i];
		if(p[i]>max)
			max=p[i];
	}
	for(i=min;i<=max;i++)
	{
		for(j=0;j<N;j++)
		{
			if(p[j]==i)
			{
				if(amount==0)
					printf("%d",p[j]);
				else
					printf(" %d",p[j]);
				amount=amount+1;
			}

		}
	}
}

void combine(int N,int p[100],int M,int q[100])
{
	order(N,p);						//?????p??p[100]
	printf(" ");
	order(M,q);
	printf("\n");
}

int main()
{
	scan();
	combine(m,a,n,b);
	return 0;
}


