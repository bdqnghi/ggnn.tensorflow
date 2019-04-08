
main()
{
      int x1,y1,x2,y2,i,j,x,y,sum,t;
      scanf("%d %d",&x1,&y1);
      int a[x1][y1];
      
      for(i=0;i<=x1-1;i++)
          for(j=0;j<=y1-1;j++)
          {scanf("%d",&a[i][j]);
//printf("%d",a[i][j]);
}       
       scanf("%d %d",&x2,&y2);
      int b[x2][y2];
       for(i=0;i<=x2-1;i++)
          for(j=0;j<=y2-1;j++)
          {scanf("%d",&b[i][j]);
         // printf("%d",b[i][j]);
          }
       int c[x1][y2];
       //printf("%d %d",x1,y2);
       for(i=0;i<x1;i++)
          for(j=0;j<y2;j++)
          {
                sum=0;
                for(t=0;t<x2;t++)          
                     {  
                                           //printf("%d %d",a[x1][t],b[t][y2]);
                                           sum=sum+(a[i][t])*(b[t][j]);
                     //printf("%d",sum);
                   //  printf("%d",t);
                  
                     }     
                c[i][j]=sum;
                //printf("%d",c[i][j]);          
          }
         for(i=0;i<x1;i++)
          for(j=0;j<y2;j++)
            {
             if(j==y2-1)
             printf("%d\n",c[i][j]);  
             else
             printf("%d ",c[i][j]);
            }
            
            
            
          
      }
