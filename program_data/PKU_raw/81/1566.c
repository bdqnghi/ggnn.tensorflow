int g(int c[5][5],int v,int u)
{
	int b[1][5],i;
		if(v>=0&&v<5&&u>=0&&u<5)
		{   
			for(i=0;i<5;i++) 
			{    
			 b[0][i]=c[v][i];
		     c[v][i]=c[u][i];
			 c[u][i]=b[0][i];
			}
			 return(1);
		}
        else return(0);
}
void main()
{   
	int a[5][5],i,j,m,n;   
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		scanf("%d",&m);
		scanf("%d",&n);
		g(a,m,n);
		if(g(a,m,n)==0)printf("error");
		else if(g(a,m,n)==1)
			for(i=0;i<5;i++)
	{	
			for(j=0;j<5;j++)
		{
			if(j/4==0)printf("%d ",a[i][j]);
			else if(j/4==1)printf("%d\n",a[i][j]);
			}
	}
}