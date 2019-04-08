
int mat(int a[5][5],int m,int n)
{
	int i,e;
	if (n<=4&&n>=0&&m<=4&&m>=0)
	{
		
		for (i=0;i<=4;i++)
		{
			e=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=e;
			

		}
			return 1;		
	}
	else
		return 0;	
	
}
int main(int argc, char* argv[])
{
	int b[5][5]={0},k,l,c,m,n;
	
	for (k=0;k<=4;k++)
	{
		for (l=0;l<=4;l++)
			scanf("%d",&b[k][l]);
		
	}
	
	
	scanf("%d %d",&m,&n);	
	c = mat(b,m,n);
	
	if (c==0)
		printf("error");
	
	else if (c==1)
	{
		for (k=0;k<=4;k++)
		{
			for (l=0;l<=3;l++)
			{
				printf("%d ",b[k][l]);
			}
			
		printf("%d",b[k][4]);

			printf("\n");
		}
	}
	
	return 0;
}
