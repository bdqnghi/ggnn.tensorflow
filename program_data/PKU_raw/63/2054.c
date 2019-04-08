int main()
{
	int a[100][100],b[100][100],c[100][100];
	memset(c,0,sizeof(c));
	int x1,x2,y1,y2;
	int i,j,k;
	scanf("%d %d",&x1,&y1);
	for(i=0;i<x1;i++)
		{for(j=0;j<y1;j++)
			scanf("%d",&a[i][j]);}
	scanf("%d %d",&x2,&y2);
	for(i=0;i<x2;i++)
		{for(j=0;j<y2;j++)
			scanf("%d",&b[i][j]);}
	for(i=0;i<x1;i++)
	{
      for(j=0;j<y2;j++)
	  {
		 for(k=0;k<x2;k++)
			{ 
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
		    }
		 if(j==y2-1)
		 printf("%d\n",c[i][j]);
		 else 
	     printf("%d ",c[i][j]);
	  }
	}
}
