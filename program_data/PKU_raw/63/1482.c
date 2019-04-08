main()
{
      int i,j,k,x1,y1,x2,y2,sign;
      int a[100][100],b[100][100],c[100][100]={{0}};
      scanf("%d %d",&x1,&y1);
      for(i=0;i<x1;i++)
      for(j=0;j<y1;j++)
      scanf("%d",&a[i][j]);
      scanf("%d %d",&x2,&y2);
      for(i=0;i<x2;i++)
      for(j=0;j<y2;j++)
      scanf("%d",&b[i][j]);
      for(i=0;i<x1;i++)
      for(j=0;j<y2;j++)
      {
                       for(k=0;k<x2;k++)
                       c[i][j]+=a[i][k]*b[k][j];
      }
      for(i=0;i<x1;i++)
      {
                       sign=0;
                       for(j=0;j<y2;j++)
                       {
                                        if(sign==0)
                                        {
                                                    printf("%d",c[i][j]);
                                                    sign++;
                                        }
                                        else printf(" %d",c[i][j]);
                       }
                       printf("\n");
      }
      
}
