int main()
{
	int a[5][5],m,n,i,j,t=0,b[5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&m,&n);
	if(m<5&&n<5)
		t++;
	if(t==0)
	{
	   printf("error");
	   }
	else 
	{
		for(i=0;i<5;i++)
		{
			b[i]=a[m][i];
			a[m][i]=a[n][i];
			a[n][i]=b[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j==0)
					printf("%d",a[i][j]);
				else
				printf(" %d",a[i][j]);
			}
			printf("\n");
		}
	}
		return 0;
	}



