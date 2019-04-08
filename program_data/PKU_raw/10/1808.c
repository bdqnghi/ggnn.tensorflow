main ()
{
     int n,m,i,j,k,t;
     scanf ("%d",&n);
     int *p=(int *)malloc(n*sizeof(int));
     int *q=(int *)malloc(n*sizeof(int));
     int *a=(int *)malloc(n*sizeof(int));
     for (i=0;i<n;i++)
     {
              scanf ("%d",&p[i]);
     }
     for (i=0;i<n;i++)
     {
              q[i]=1;
     }
     for (i=1;i<n;i++)
     {
         t=0;
         for (j=0;j<n;j++)
         {a[j]=0;}
         for (j=0;j<i;j++)
         {
               if (p[j]>=p[i])
               {
                   a[j]=q[j];
               }
               for (k=0;k<i;k++)
               {
                   if (a[k]>t)
                       {
                           t=a[k];
                       }
               }
         }
            q[i]=q[i]+t;
     }
     t=0;
     for (i=0;i<n;i++)
     {
         if (q[i]>t)
         {
                t=q[i];
         }
     }
printf ("%d",t);
return 0;
}