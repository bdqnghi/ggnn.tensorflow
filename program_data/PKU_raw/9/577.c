main ()
{
     int n,j,k,t;
     scanf ("%d",&n);
     char a[n][10];
     char p[1][10]; 
     int g[n];
     for (j=0;j<n;j++)
     scanf ("%s %d",a[j],&g[j]);
        for (j=n-1;j>0;j--)
         for (k=n-1;k>n-j-1;k--)
        {
             if (g[k]>=60)
             {
                  if (g[k]>g[k-1])
                {
                     t=g[k-1];
                     g[k-1]=g[k];
                     g[k]=t;
                     strcpy (p[0],a[k-1]);
                       strcpy (a[k-1],a[k]);
                         strcpy (a[k],p[0]);
                } 
             }
         }  
          for (k=0;k<n;k++)         
      printf ("%s\n",a[k]);
     getchar ();
     getchar ();
     }
     
     
