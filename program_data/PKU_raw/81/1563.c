void main()
{
	int f(int m,int n);
	int i,j,x,y,d[5][5],b[5];
	for(i=0;i<5;i++)
	{	for(j=0;j<5;j++)
	scanf("%d ",&d[i][j]);}
	scanf("%d %d",&x,&y);
	if(f(x,y)==0)
		printf("error\n");
	else {for(j=0;j<5;j++)
		  {
		b[j]=d[x][j];
          d[x][j]=d[y][j];
          d[y][j]=b[j];
	}
		  for(i=0;i<5;i++)
		 {printf("\n");
			 for(j=0;j<4;j++)
			 {printf("%d ",d[i][j]);}
			 printf("%d",d[i][4]);}}
}
	int f(int m,int n)
	{
		int c;
		if(m<=4&&m>=0&&n<=4&&n>=0)
			c=1;
		else c=0;
		return(c);
	}

