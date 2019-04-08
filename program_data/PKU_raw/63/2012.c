main()
{
      int x1,y1,x2,y2,i,j,k;
      int **p1,**p2,**p3;
      scanf("%d%d\n",&x1,&y1); 
      p1=(int**)malloc(x1*sizeof(int*));
      for(i=0;i<x1;i++)
      {
                       p1[i]=(int*)malloc(y1*sizeof(int));
      }
      for(i=0;i<x1;i++)
      {
                       for(j=0;j<y1;j++)
                       {
                                        if(j==y1-1)scanf("%d",&p1[i][j]);
                                        else scanf("%d ",&p1[i][j]);
                       }
      }
      scanf("%d%d\n",&x2,&y2);
      p2=(int**)malloc(x2*sizeof(int*));
      for(i=0;i<x2;i++)
      {
                       p2[i]=(int*)malloc(y2*sizeof(int));
      }
      for(i=0;i<x2;i++)
      {
                       for(j=0;j<y2;j++)
                       {
                                        if(j==y2-1)scanf("%d",&p2[i][j]);
                                        else scanf("%d ",&p2[i][j]);
                       }
      }
      p3=(int**)malloc(x1*sizeof(int*));
      for(i=0;i<x1;i++)
      {
                       p3[i]=(int*)malloc(y2*sizeof(int));
      }
      for(i=0;i<x1;i++)
      {
                       for(j=0;j<y2;j++)p3[i][j]=0;
      }
      for(i=0;i<x1;i++)
      {
                       for(j=0;j<y2;j++)
                       {
                                        for(k=0;k<x2;k++)
                                        {
                                                         p3[i][j]=p3[i][j]+p1[i][k]*p2[k][j];
                                        }
                                        if(j==y2-1)printf("%d\n",p3[i][j]);
                                        else printf("%d ",p3[i][j]);
                       }
      }
}
