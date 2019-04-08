int jis(int x, int y, int a[5][5]);
void main()
{
    
	int s[5][5],i,j,m,n,x[5];
	
		for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
scanf("%d",&s[i][j]);
		}
	}
scanf("%d %d",&n,&m);

	if(jis(n, m, s[5][5])==0)
     printf("error");
	if(jis(n, m, s[5][5])==1)
	{
		
   for(j=0;j<5;j++)
		{
   x[j]=s[m][j];
   s[m][j]=s[n][j];
   s[n][j]=x[j];

		}
		for(i=0;i<5;i++)
	{
		
		
     printf("%d %d %d %d %d\n",s[i][0],s[i][1],s[i][2],s[i][3],s[i][4]);
		}

	}
}
int jis(int x, int y, int a[5][5])
{
	if(x>=0&&x<=4&&y>=0&&y<=4)
		return 1;
	else
		return 0;
}