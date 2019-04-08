main()
{
     int m,n,i,j,t;
     scanf("%d %d",&m,&n);
     int a[9][9];
     
     int b[9][9];
     for(i=0;i<9;i++)
        for(j=0;j<9;j++)
     
           {a[i][j]=0;b[i][j]=0;}
           
           a[4][4]=m;b[4][4]=m;
     for(t=0;t<n;t++)
     {
     for(i=0;i<9;i++)
        for(j=0;j<9;j++)
        a[i][j]=0;
      for(i=0;i<9;i++)
        for(j=0;j<9;j++)
          {
                        if(b[i][j]!=0)
                          { a[i][j]=a[i][j]+2*b[i][j];
                            a[i+1][j]=a[i+1][j]+b[i][j];
                            a[i-1][j]=a[i-1][j]+b[i][j];
                            a[i+1][j+1]=a[i+1][j+1]+b[i][j];
                            a[i-1][j+1]=a[i-1][j+1]+b[i][j];
                            a[i][j+1]=a[i][j+1]+b[i][j];
                            a[i-1][j-1]=a[i-1][j-1]+b[i][j];
                            a[i][j-1]=a[i][j-1]+b[i][j];
                            a[i+1][j-1]=a[i+1][j-1]+b[i][j];
                          }
          }
       for(i=0;i<9;i++)
        for(j=0;j<9;j++)
        b[i][j]=a[i][j];    
      }     
      for(i=0;i<9;i++)
        for(j=0;j<9;j++)
        {
        if (j==8)
         { printf("%d",a[i][j]); 
         printf("\n"); 
         }
         else
        printf("%d ",a[i][j]);
          
         }  

      }
