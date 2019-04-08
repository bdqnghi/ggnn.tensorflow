main()
{     
      int i,j,k,m=0,n=0,t=0,p,a[5][5];
      for(i=0;i<5;i++)
      {
          for(j=0;j<5;j++)
          {
               scanf("%d",&a[i][j]);   
          }
      }
      for(i=0;i<5;i++)
      {
          p=a[i][0];
          m=i;
          for(j=0;j<5;j++)
          {
               if (p<a[i][j])
               {
                     n=j;
                     p=a[i][j];
               }    
          }
          if ((a[m][n]<=a[0][n])&&(a[m][n]<=a[1][n])&&(a[m][n]<=a[2][n])&&(a[m][n]<=a[3][n])&&(a[m][n]<=a[4][n]))
          {
               printf("%d %d %d",m+1,n+1,p);
               t++;
          }
          n=0;  
      } 
      if (t==0)
      printf("not found");
      
}
