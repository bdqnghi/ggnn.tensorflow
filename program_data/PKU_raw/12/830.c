void main()
{
	int a[101][101]={{0}},count=0,i,j,q,n,b;
	for(i=1;i<=100;i++)
	{
		scanf("%d",&b);
		if(b!=-1)
		{
			a[i][1]=b;
			for(j=2;j<=100;j++)
			{
			     scanf("%d",&a[i][j]);
			     if(a[i][j]==0)
				 {a[i][j]=0;break;}
			}
		}
		else break;
	}
	n=i-1;
	for(i=1;i<=n;i++)
	{
		count=0;
		for(j=1;j<=100;j++)
		{
			if(a[i][j]!=0)
			{
				for(q=1;q<=100;q++)
				{
				        if(a[i][j]==2*a[i][q])
					    count=count+1;
				}
			}
			else {break;}
		}
		printf("%d\n",count);
	}
}