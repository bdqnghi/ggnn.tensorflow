void main()
{
	int a[100][100],b[100][100],c[100][100]={0},x1,x2,y1,y2,j,i,m,n;
  scanf("%d %d",&x1,&y1);
  for(i=0;i<x1;i++)
  {  
	  for(j=0;j<y1;j++)
     scanf("%d",&a[i][j]);
  }
  scanf("%d %d",&x2,&y2);
  for(i=0;i<x2;i++)
  {
	  for(j=0;j<y2;j++)
      scanf("%d",&b[i][j]);
  }
  for(m=0;m<x1;m++)
  {  
	  for(n=0;n<y2;n++)
	  {
		  for(i=0;i<x2;i++)
			  c[m][n]=c[m][n]+a[m][i]*b[i][n];
	  }
  }
  for(m=0;m<x1;m++)
  {
	  for(n=0;n<y2-1;n++)
	  {printf("%d ",c[m][n]);}
	  printf("%d\n",c[m][n]);
  }
}

   
  
