
int * p[5];

int exchange(int m,int n);
void output();

int main()
{
	int num[5][5];
	int i,j,m,n;
	for (i=0;i<5;i++)
	{
		for (j=0;j<5;j++)
		{
			scanf("%d",&num[i][j]);
		}
		p[i]=&num[i][0];
	}
	scanf("%d%d",&m,&n);
	if (exchange(m,n)==0)
	{
		printf("error\n");
	}
	else
	{
		output();
	}
	scanf("%d",&m);
	return 0;
}

int exchange(int m,int n)
{
	if (m<0 || n<0 || m>4 || n>4) return 0;
	int * pt;
	pt=p[m];
	p[m]=p[n];
	p[n]=pt;
	return 1;
}

void output()
{
	int i,j;
	for (i=0;i<5;i++)
	{
		printf("%d",*(p[i]));
		for (j=1;j<5;j++)
		{
			printf(" %d",*(p[i]+j));
		}
		printf("\n");
	}
}