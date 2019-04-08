int kuso(int n,int m)
{
	if(n>=0&&n<5&&m>=0&&m<5)
		return(1);
	else 
		return(0);
}
void main()
{
	int a[5][5],n,m,i,j,p,b[5];
	int kuso(int n,int m);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
		scanf("%d %d",&n,&m);
	p=kuso(n,m);
	if(p==0)
		printf("error\n");
	else
	{	
		for(i=0;i<5;i++)
		{	
			b[i]=a[n][i];
			a[n][i]=a[m][i];
			a[m][i]=b[i];
		}
		for(i=0;i<5;i++)
			for(j=0;j<5;j++)
			{
				if(j<4)
					printf("%d ",a[i][j]);
				else
					printf("%d\n",a[i][j]);
			}
	}
}
		
		


