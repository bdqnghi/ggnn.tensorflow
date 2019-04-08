int M[5][5];
int main()
{
	int i=0,j=0,k,n,m,d=0;
	int f(int p, int q);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&M[i][j]);
	scanf("%d %d",&n,&m);
	k=f(n,m);
	if(k==0)
		printf("error");
	else
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				printf("%d",M[i][j]);
				d+=1;
				if(d%5==0)
					printf("\n");
				else 
					printf(" ");
			}
		}
	}
}

int f(int p, int q)
{
	int e,i=0,j=0,n,m,a;
	if(q>=0&&p<5&&p>=0&&q<5)
	{
		a= 1;
		for(i=0;i<5;i++)
			{
				e=M[p][i];
				M[p][i]=M[q][i];
				M[q][i]=e;
			}
	}
	else a= 0;
	return a;
}