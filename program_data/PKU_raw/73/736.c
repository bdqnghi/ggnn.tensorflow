main ()
{
     int a[5][5],b[5][5],c[5][5],i,j,t,m,count=0,q,w;
     for (i=0;i<5;i++)
     for (j=0;j<5;j++)
     {
         scanf ("%d",&a[i][j]);
         b[i][j]=100000;
         c[i][j]=100000;
     }
     for (i=0;i<5;i++)
     {
         t=a[i][0];m=0;
         for (j=0;j<5;j++)
         {
             if (a[i][j]>t) {t=a[i][j];m=j;}
         }
          b[i][m]=t;
     }
     for (j=0;j<5;j++)
     {
         t=a[0][j];m=0;
         for (i=0;i<5;i++)
         {
             if (a[i][j]<t) {t=a[i][j];m=i;}
         }
         c[m][j]=t;
     }
     for (i=0;i<5;i++)
     for (j=0;j<5;j++)
     {
         if (a[i][j]==b[i][j]&&b[i][j]==c[i][j])
         {printf ("%d %d %d\n",i+1,j+1,b[i][j]);
         count++;}

     }
     if (count==0) {printf("not found\n");}
}