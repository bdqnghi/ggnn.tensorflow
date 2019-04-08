int win(int x,int w[],int p[])
 {    
      int i,topw=0,topp=0,downw=x-1,downp=x-1;
      int j,convert,converts;
      int win=0,same=0,fail=0;
        for (i=0;i<x;i++)
           for (j=0;j<x-i-1;j++)
      {
                if (w[j]<w[j+1])
              {
                   convert=w[j];
                   w[j]=w[j+1];
                   w[j+1]=convert;      
               }
      
               if (p[j]<p[j+1])
                 {
                   converts=p[j];
                   p[j]=p[j+1];
                   p[j+1]=converts;      
                  }
      } 
     /* for (i=0;i<x;i++)
      printf ("%d %d\n",w[i],p[i]);*/
          for (i=0;i<x;i++)
           {
              if (w[downw]>p[downp])
               {
                  win++;
                  downw--;
                  downp--;
               }
              else 
                 if (w[downw]<p[downp])
                   {
                       fail++;
                       downw--;
                       topp++;
                       } 
                  else 
                    if (w[topw]>p[topp])
                     {
                        win++;
                        topw++;
                        topp++;
                        }
                    else
                    if(w[downw]==p[topp])
                    break;
                    else
                   {  
                     fail++;
                     topp++;
                     downw--;
                   }    
           }
          /* printf ("%d %d\n",win,fail);*/
           return (200*(win-fail));
      }            

main ()
{
  int n,i,j,k,get;
  scanf ("%d",&n);
  while (1)
  {    
       if (n==0)
       break;
       else
       {    
            int a[n];
            int b[n];
            for (i=0;i<n;i++) 
            scanf ("%d",&a[i]);
            for (i=0;i<n;i++)
            scanf ("%d",&b[i]); 
        get=win(n,a,b);
        printf("%d\n",get);
        }
        scanf ("%d",&n);
     }
     getchar ();
     getchar ();
}     
     
     
     
     
     
