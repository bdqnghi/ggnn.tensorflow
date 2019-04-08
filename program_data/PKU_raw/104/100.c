void main()
{
	int x,y;
	int i,j,n,m;
	int rx[1000]={0},ry[1000]={0};

	scanf("%d %d",&x,&y);

	rx[0]=x;
	ry[0]=y;
	for(i=1;x!=0;i++)
	{
		x=x/2;
        rx[i]=x;
	}
	m=i-1;
	for(j=1;y!=0;j++)	
	{
		y=y/2;
	    ry[j]=y;
	}
	n=j-1;
	for(i=m-1,j=n-1;i>=0&&j>=0;i--,j--)
	{
		if(rx[i]!=ry[j])
			break;
	}
	
	printf("%d",rx[i+1]);
}