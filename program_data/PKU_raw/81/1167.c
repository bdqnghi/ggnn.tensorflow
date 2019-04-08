int isin(int n,int m);
int main()
{
	int a,b,n,m;
	int z[5][5];
	for(a=0;a<=4;a++)
	{
		for(b=0;b<=4;b++)
		{
			scanf("%d",&z[a][b]);
		}
	}
	scanf("%d %d",&n,&m);
	if (isin(n,m)==0) printf("error");
		else
	{
			int x[5];
		
		for(a=0;a<=4;a++)
		{
			x[a]=z[n][a];
			z[n][a]=z[m][a];
			z[m][a]=x[a];
		}
        for(a=0;a<=4;a++)
		{
		    for(b=0;b<=4;b++)
			{
				if(b<4)
			    printf("%d ",z[a][b]);
				else
					printf("%d",z[a][b]);
			}
			printf("\n");
		}
	}
	return 0;
}

int isin(int n,int m)
{
    if((n<=4)&&(m<=4)&&(n>=0)&&(m>=0))
	{
		
		return 1;
	}
	else return 0;
}