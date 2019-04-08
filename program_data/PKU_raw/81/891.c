
void main()
{
	int a[5][5],i=0,j=0,c,b,d[5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d%d",&c,&b);
	
	if((c>4)||(b>4)||(c<0)||(b<0))
	{
		printf("error\n");
	}
	if((c>=0)&&(c<=4)&&(b>=0)&&(b<=4))
	{
		for(i=0;i<5;i++)
		{
			d[i]=a[c][i];
			a[c][i]=a[b][i];
			a[b][i]=d[i];
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d ",a[i][j]);
			}
			printf("%d",a[i][4]);
			printf("\n");
		}
	}
}
