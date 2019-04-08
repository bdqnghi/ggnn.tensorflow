void main()
{
     int a,b;
     scanf("%d,%d", &a, &b);
	int i, j, x[5][5], maxi, locali, minj, localj, max[5], min[5], col[5], row[5];
	for(i=0; i<=a-1; i++)
	{
		for(j=0; j<=b-1; j++)
			scanf("%d",&x[i][j]);
	}
	for(i=0; i<=a-1; i++)
	{
		for(j=0, maxi=x[i][j], locali=j ; j<=b-2; j++)//???i??j?
		{		
			if(maxi<=x[i][j+1])
			{
				maxi=x[i][j+1]; locali=j+1;//locali????????
			}
		}
		max[i]=maxi; col[i]=locali;//col i???i??????????
	}
	for(j=0, i=0; j<=b-1; j++)
	{
		
		for(i=0, minj=x[i][j], localj=i ; i<=a-2; i++)//???j??i?
		{
			if(minj>=x[i+1][j])
			{
				minj=x[i+1][j]; localj=i+1;//localj????????
			}
		}
		min[j]=minj; row[j]=localj;//row j???j????????
	}
	for(i=0, j=0; i<=a-1; i++)//???j????????
	{
		if(row[col[i]]==i)
		{
			printf("%d+%d",i,col[i]);
			j++;
		}
	}
	if(j==0)
		printf("No\n");
}
