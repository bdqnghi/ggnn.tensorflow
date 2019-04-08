void main()
{
	int x0,y0,i,j,k,l=10000;
	int x[10],y[10]={0};

	scanf("%d%d",&x0,&y0);
	x[0]=x0;y[0]=y0;
	for(i=0;i<9;i++)
	{
		x[i+1]=x[i]/2;
	}
	for(i=0;i<9;i++)
	{
		y[i+1]=y[i]/2;
	}
	//	printf("%d",x[0]);
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(x[i]==y[j])
			{l=i;break;}
		}
	if(i==l)break;
	}
		printf("%d",x[i]);
}
     
