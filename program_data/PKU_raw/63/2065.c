main()
{
    int a[100][100],b[100][100],d[100][100],x1,y1,x2,y2,x3,y3,i,j,k;
    char e;
    
    scanf("%d %d",&x1,&y1);
    for(i=0;i<x1;i++)
    {
        for(j=0;j<y1;j++)
        {
            scanf("%d%c",&a[i][j],&e);
            if(e!=' ')
            break;
            else;
        }   
    } 
     
    scanf("%d %d",&x2,&y2);
    for(i=0;i<x2;i++)
    {
        for(j=0;j<y2;j++)
        {
           scanf("%d%c",&b[i][j],&e);
            if(e!=' ')
            break;
            else;
        }   
    }      
    
      x3=x1;
      y3=y2;
      //printf("%d\n",a[0][4]);
      for (i=0;i<x3;i++)
      {
          for (j=0;j<y3;j++)
          {
              d[i][j]=0;
              for (k=0;k<x2;k++)
              {
                  d[i][j]=d[i][j]+a[i][k]*b[k][j];
                  //printf("%d %d %d\n",k,i,j);
                  //printf("%d %d %d\n",a[i][k],b[k][j],e[i][j]);
                  //printf("%d",e[i][j]);
              }
          }
          
      }
      for (i=0;i<x3;i++)
      {
          for (j=0;j<y3-1;j++)
          {
              printf("%d ",d[i][j]);
          }
          printf("%d\n",d[i][y3-1]);
      }
      //printf("%d",e[0][1]);
      
}
    
    
