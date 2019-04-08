int main()
{
	int a[5][5],i,j,k,max,x;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<5;i++)
	{
		for(x=0,max=a[i][0],j=1;j<5;j++)
			if(max<a[i][j])
			{
				max=a[i][j];
				x=j;
			}
		for(j=0;j<5;j++)if(max>a[j][x])break;
		if(j==5)
		{
			printf("%d %d %d",i+1,x+1,max);break;
		}
	}
	if(i==5&&j!=5)printf("not found");
	return 0;
}

	



		

