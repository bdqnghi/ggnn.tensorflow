main()
{
      int a[9][9];
      int i,j;
      for(i=0;i<9;i++)
      for(j=0;j<9;j++)
      a[i][j]=0;
      
      int b[9][9];
      for(i=0;i<9;i++)
      for(j=0;j<9;j++)
      b[i][j]=0;
      
      int m,n;
      scanf("%d %d",&m,&n);
      a[4][4]=m;
      if(n==1)
      {
          for(i=3;i<6;i++)
          for(j=3;j<6;j++)
          b[i][j]=a[i][j]+a[4][4];
          
          for(i=0;i<9;i++)
          for(j=0;j<9;j++)
          {
          if(j!=8)
          printf("%d ",b[i][j]);
          else
            {
              printf("%d",b[i][j]);printf("\n"); 
            }
          
          }
      }
      else if(n==2)
      {
          for(i=3;i<6;i++)
          for(j=3;j<6;j++)
          b[i][j]=a[i][j]+a[4][4];
          for(i=3;i<6;i++)
          for(j=3;j<6;j++)
          a[i][j]=b[i][j];
          for(i=2;i<7;i++)
          for(j=2;j<7;j++)
          b[i][j]=2*a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
      
          for(i=0;i<9;i++)
          for(j=0;j<9;j++)
          {
          if(j!=8)
          printf("%d ",b[i][j]);
          else
            {
              printf("%d",b[i][j]);printf("\n");
            }
          
          }
      }
      else if(n==3)
      {
          for(i=3;i<6;i++)
          for(j=3;j<6;j++)
          b[i][j]=a[i][j]+a[4][4];
          for(i=3;i<6;i++)
          for(j=3;j<6;j++)
          a[i][j]=b[i][j];
          for(i=2;i<7;i++)
          for(j=2;j<7;j++)
          b[i][j]=2*a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
          for(i=2;i<7;i++)
          for(j=2;j<7;j++)
          a[i][j]=b[i][j];
          for(i=1;i<8;i++)
          for(j=1;j<8;j++)
          b[i][j]=2*a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
          
          for(i=0;i<9;i++)
          for(j=0;j<9;j++)
          {
          if(j!=8)
          printf("%d ",b[i][j]);
          else
            {
              printf("%d",b[i][j]);printf("\n");
            }
          
          }
      }
      else 
      {
          for(i=3;i<6;i++)
          for(j=3;j<6;j++)
          b[i][j]=a[i][j]+a[4][4];
          for(i=3;i<6;i++)
          for(j=3;j<6;j++)
          a[i][j]=b[i][j];
          for(i=2;i<7;i++)
          for(j=2;j<7;j++)
          b[i][j]=2*a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
          for(i=2;i<7;i++)
          for(j=2;j<7;j++)
          a[i][j]=b[i][j];
          for(i=1;i<8;i++)
          for(j=1;j<8;j++)
          b[i][j]=2*a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
          
          for(i=1;i<8;i++)
          for(j=1;j<8;j++)
          a[i][j]=b[i][j];
          
          for(i=0;i<9;i++)
          for(j=0;j<9;j++)
          {
               if(i==0&&j==0)
               b[i][j]=2*a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
               else if(i==0&&j==8)
               b[i][j]=2*a[i][j]+a[i][j-1]+a[i+1][j]+a[i+1][j-1];
               else if(i==8&&j==0)
               b[i][j]=2*a[i][j]+a[i][j+1]+a[i-1][j]+a[i-1][j+1];
               else if(i==8&&j==8)
               b[i][j]=2*a[i][j]+a[i][j-1]+a[i-1][j]+a[i-1][j-1];
               else if(i==0)
               b[i][j]=2*a[i][j]+a[i][j+1]+a[i][j-1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
               else if(i==8)
               b[i][j]=2*a[i][j]+a[i][j+1]+a[i][j-1]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1];
               else if(j==0)
               b[i][j]=2*a[i][j]+a[i-1][j]+a[i+1][j]+a[i-1][j+1]+a[i][j+1]+a[i+1][j+1];
               else if(j==8)
               b[i][j]=2*a[i][j]+a[i-1][j]+a[i+1][j]+a[i-1][j-1]+a[i][j-1]+a[i+1][j-1];
               else      
               b[i][j]=2*a[i][j]+a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]+a[i][j-1]+a[i][j+1]+a[i+1][j-1]+a[i+1][j]+a[i+1][j+1]; 
          }
          
          for(i=0;i<9;i++)
          for(j=0;j<9;j++)
          {
          if(j!=8)
          printf("%d ",b[i][j]);
          else
            {
              printf("%d",b[i][j]);printf("\n");
            }
          
          }
      }
}
