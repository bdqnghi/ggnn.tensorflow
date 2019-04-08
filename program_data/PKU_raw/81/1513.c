int change(int a[5][5],int m,int n)
{
	int c,i,k;
	if(m>4||n>4)
	{
		printf("error\n");
		return(0);
	}
	else
	{
		for(i=0;i<5;i++)
		{
			if(i==m)
				for(k=0;k<5;k++)
				{
				c=a[i][k];
				a[i][k]=a[n][k];
				a[n][k]=c;
				}
		}
	}
		for(i=0;i<5;i++)
		{
            printf("%d",a[i][0]);
			for(k=1;k<5;k++)
			{
				printf(" %d",a[i][k]);
			}
			printf("\n");
		}
        return(1);
	}
void main()
{
	int b[5][5],i,k,x,y;
	for(i=0;i<5;i++)
	{
		for(k=0;k<5;k++)
		{
			scanf("%d",&b[i][k]);
		}
	}
	scanf("%d %d",&x,&y);
	change(b,x,y);
}