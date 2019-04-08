
main()
{
      int a[100][100],b[100][100],c[100][100],i,j,k,x1,y1,x2,y2,m;
      scanf("%d %d",&x1,&y1);
      for(i=0;i<x1;i++)
        for(j=0;j<y1;j++)
        {
           scanf("%d",&m);
           a[i][j]=m;
        }
      scanf("%d %d",&x2,&y2);  
      for(i=0;i<x2;i++)
        for(j=0;j<y2;j++)
        {
           scanf("%d",&m);
           b[i][j]=m;
        }
      for(i=0;i<x1;i++)
        for(j=0;j<y2;j++)
        {
           c[i][j]=0;
           for(k=0;k<x2;k++)
           c[i][j]=a[i][k]*b[k][j]+c[i][j];
        }
      for(i=0;i<x1;i++)
        for(j=0;j<y2;j++)
        {
           if(j<y2-1)
             printf("%d ",c[i][j]);
           else
             printf("%d\n",c[i][j]);
        }
     
}
