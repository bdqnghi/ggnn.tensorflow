main(){
       int x1,x2,y1,y2,i,j,l;
       scanf("%d %d",&x1,&y1);
       int a[101][101],b[101][101];
       int c[101][101];
       for(i=1;i<=x1;i++)
          {
            for(j=1;j<=y1;j++)
            scanf("%d",&a[i][j]);
          }
       scanf("%d %d",&x2,&y2);
       for(i=1;i<=x2;i++)
          {
            for(j=1;j<=y2;j++)
            scanf("%d",&b[i][j]);
          }     
       for(i=1;i<=x1;i++)
          {
          for(j=1;j<=y2;j++)
              {
                            c[i][j]=0;
                            for(l=1;l<=x2;l++)
                                c[i][j]+=a[i][l]*b[l][j];
                             if(j==1) printf("%d",c[i][j]);   
                             else printf(" %d",c[i][j]);   
                            }  
          printf("\n");
          }
}

  