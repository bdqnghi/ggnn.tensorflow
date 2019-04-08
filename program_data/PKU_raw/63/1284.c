int main()
{
    int a[101][101],b[101][101],c[101][101];
    int x1,y1,x2,y2,i,j,k;
    scanf("%d %d",&x1,&y1);
    for(i=0;i<x1;i++)
    {
                       for(j=0;j<y1;j++)
                       {
                                         scanf("%d",&a[i][j]);
                       }
    }
    scanf("%d %d",&x2,&y2);
    for(i=0;i<x2;i++)
    {
                     for(j=0;j<y2;j++)
                     {
                                      scanf("%d",&b[i][j]);
                     }
    }
    for(i=0;i<x1;i++)
    {
                     for(j=0;j<y2;j++)
                     {
                                      c[i][j]=0;
                                      for(k=0;k<x2;k++)
                                      {
                                                       c[i][j]+=a[i][k]*+b[k][j];
                                      }
                     }
    }
    for(i=0;i<x1;i++)
    {
                     for(j=0;j<y2;j++)
                     {
                                      if(j!=y2-1)  printf("%d ",c[i][j]);
                                      else printf("%d",c[i][j]);
                     }
                     printf("\n");
    }
}
