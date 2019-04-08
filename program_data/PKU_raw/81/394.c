void main()
{
	int ch(int a[5][5],int n,int m);
    int b[5][5],x,y,i,j,t;
    for(i=0;i<5;i++)
		for(j=0;j<5;j++) scanf("%d",&b[i][j]);
	scanf("%d %d",&x,&y);
	if(ch(b,x,y))
	{
		for(j=0;j<5;j++)
	  { 
		  t=b[x][j];
	      b[x][j]=b[y][j];
	      b[y][j]=t;
	  }
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++) printf("%d ",b[i][j]);
			printf("%d\n",b[i][4]);
		}
	}
	else printf("error");

}
int ch(int a[5][5],int n,int m)
{
	if(n>=0&&n<=4&&m>=0&&m<=4) return(1);
	else return(0);
}

