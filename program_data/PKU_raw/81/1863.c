int main()
{
	int a[5][5];
	int temp[5];
	int n,m;
	int i,j;
	for(i=0;i<=4;i++){
		for(j=0;j<=4;j++)
		{
			scanf("%d",&a[i][j]);		
		}	
	}
	scanf("%d %d", &n,&m);
	if(n>=0 && n<=4 && m>=0 && m<=4)
	{
		temp[0]=a[n][0];
		temp[1]=a[n][1];
		temp[2]=a[n][2];
		temp[3]=a[n][3];
		temp[4]=a[n][4];

		a[n][0]=a[m][0];
		a[n][1]=a[m][1];
		a[n][2]=a[m][2];
		a[n][3]=a[m][3];
		a[n][4]=a[m][4];

		a[m][0]=temp[0];
		a[m][1]=temp[1];
		a[m][2]=temp[2];
		a[m][3]=temp[3];
		a[m][4]=temp[4];	


		for(j=0;j<=3;j++)
			{
				printf("%d ",a[0][j]);
			}
		printf("%d",a[0][4]);
		printf("\n\n");

			for(j=0;j<=3;j++)
			{
				printf("%d ",a[1][j]);
			}
			printf("%d",a[1][4]);
		printf("\n\n");

		for(j=0;j<=3;j++)
			{
				printf("%d ",a[2][j]);
			}
		printf("%d",a[2][4]);
		printf("\n\n");

		for(j=0;j<=3;j++)
			{
				printf("%d ",a[3][j]);
			}
		printf("%d",a[3][4]);
		printf("\n\n");

		for(j=0;j<=3;j++)
			{
				printf("%d ",a[4][j]);
			}
		printf("%d",a[4][4]);
		printf("\n\n");









		}
	
	else
		printf("error\n");

return 0;
}