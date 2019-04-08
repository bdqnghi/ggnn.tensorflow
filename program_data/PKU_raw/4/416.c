main()
{
      int m,n,i,j,k,l,p,q;
      int s[120][120];
      scanf("%d%d",&m,&n);
      for (i=1;i<=m;i++)
      {
       for (j=1;j<=n;j++)
       {
       scanf("%d",&s[i][j]);
      } 
      }
      l=0;
      i=1;j=1;
      while (l<n*m)
      {
            printf("%d\n",s[i][j]);
            l++; 
            if ((j==1)&&(i+1<=n)) 
            {
               j=i+1;
               i=1;
               }
           else if((j==1)&&(i+1>n))
           {
                i=i-n+2;
                j=n;
                }        
           else if (i==m)
           {
                if (j+i<=n)
                {
                           j=j+i;
                           i=1;
                           }
                else 
                {
                     i=j-n+m+1;
                     j=n;
                     }     
                     }
            else                    
            {
                i=i+1;
                j=j-1;
              }  
       }                               
            
                               
                                } 
       
