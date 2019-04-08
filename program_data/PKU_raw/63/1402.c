
int main()
{
      int x1,y1,x2,y2,i,j,t,m,n;
      int a[200][200],b[200][200],c[200][200];
      scanf("%d %d",&x1,&y1);
      for (i=0;i<x1;i++)
      {
          for(j=0;j<y1;j++)
          {
              
                scanf("%d",&m);
              a[i][j]=m;
          }
      }
      scanf("%d %d",&x2,&y2);
      for (i=0;i<x2;i++)
      {
          for(j=0;j<y2;j++)
          {
              
                scanf("%d",&n);
              b[i][j]=n;
          }
      }        
       for (i=0;i<x1;i++)
        {
          for(j=0;j<y2;j++)
          {
            c[i][j]=0;
            for(t=0;t<y1;t++)
              c[i][j]=c[i][j]+a[i][t]*b[t][j];
              if(j!=y2-1)
              printf("%d ",c[i][j]);
              else printf("%d\n",c[i][j]);
          }
        }
    return 0; 
}              

