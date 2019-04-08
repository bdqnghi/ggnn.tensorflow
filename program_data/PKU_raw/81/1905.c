int main(int argc, char* argv[])
{
	int a[5][5],e[5];
	int m,n;
	int i,j;

	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&m,&n);
	
	if(n>=0&&n<5&&m>=0&&m<5)
		{
		for(i=0;i<5;i++)
			{
				
				e[i]=a[n][i];
			}
			for(i=0;i<5;i++)
			{
				
				a[n][i]=a[m][i];
			}
			for(i=0;i<5;i++)
			{
				
				a[m][i]=e[i];
			}
			for(i=0;i<5;i++)
		{
		for(j=0;j<5;j++)
		{
			if(j!=4)
				printf("%d ",a[i][j]);
			else 
				printf("%d",a[i][j]);
			
		}printf("\n");
		}
	}
	else
	{
		printf("error");
	}

	return 0;
}


