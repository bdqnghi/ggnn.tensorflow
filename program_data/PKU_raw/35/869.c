void main()
{
	int c,b;
	int a[8][8],e[70],x,y,k,w=0;
	int i,j;
	scanf("%d,%d",&c,&b);
	for (i=0;i<c;i++)
	{
		for (j=0;j<b;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<c;i++)
	{
		e[i]=0;x=-1;y=-1;
		for (j=0;j<b;j++)
		{
			if (a[i][j]>e[i])
			{
				e[i]=a[i][j];
			    x=i;y=j;
				w=1;
			}
		}
			for(k=0;k<c;k++)
			{
				if(e[i]>a[k][y])
				{
					w=0;break;
				}
			}
			if (w==1)
			{
				printf("%d+%d\n",x,y);break;
			}
				 

		if(w==1)
			break;
	}
	if (w==0)
		printf("No\n");


}