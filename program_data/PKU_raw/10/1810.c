main ()
{
     int k;
     scanf ("%d",&k);
     int(*p)=(int *)malloc(k*sizeof(int));
     int(*q)=(int *)malloc(k*sizeof(int));
     int i,j,t;
     for (i=0;i<k;i++)
     {
         scanf ("%d",&p[i]);
         q[i]=1;
     }
     for (i=0;i<k;i++)
     for (j=0;j<i;j++)
     {
         t=0;
         if (p[j]>=p[i])
         {
                        t=q[j]+1;
                        if (t>=q[i])
                        {
                                   q[i]=t;
                        }
         }
     }
     int max=0;
     for (i=0;i<k;i++)
     {
         if (q[i]>max)
         {max=q[i];}
     }
     printf("%d",max);
}