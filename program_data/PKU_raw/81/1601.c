int main()
{
	int a[5][5];
	int b[5];
	int i,j,k,n,m;
	int swit1=0,swit2=0;
	
		swit1=0;
		swit2=0;
		
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				scanf("%d", &a[i][j]);
			}
		}
		scanf("%d %d", &n, &m);
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(a[i][j]==n)
				{
					swit1=1;
				}
				if(a[i][j]==m)
				{
					swit2=1;
				}
			}
		}		
if(swit1==0 || swit2==0 || n>=5 || m>=5)
		{
			printf("error");	
return 0;
	         }
else
{
		if(swit1==1 && swit2==1)
		{
			for(i=0;i<5;i++)
			{
				b[i]=a[n][i];
			}
			for(i=0;i<5;i++)
			{
				a[n][i]=a[m][i];
			}
			for(i=0;i<5;i++)
			{
				a[m][i]=b[i];
			}
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(j!=4)
					{
						printf("%d ", a[i][j]);
					}
					else if(j==4)
					{
						printf("%d", a[i][j]);
					}
				}
				printf("\n");
			}
		}
}
}