struct area
{
       double x;
       double y;
}a[101];
main ()
{
     int n,i,j;
     float b[101],d;
     scanf ("%d",&n);
     for (i=1;i<=n;i++)
     {
          scanf ("%lf %lf",&a[i].x,&a[i].y);
     }
     d=sqrt((a[2].x-a[1].x)*(a[2].x-a[1].x)+(a[2].y-a[1].y)*(a[2].y-a[1].y));
     for (i=2;i<=n;i++)
     {
         b[i]=sqrt((a[i].x-a[1].x)*(a[i].x-a[1].x)+(a[i].y-a[1].y)*(a[i].y-a[1].y));
         for (j=2;j<i;j++)
         {
              if (sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y))>b[i])
              {
                   b[i]=sqrt((a[i].x-a[j].x)*(a[i].x-a[j].x)+(a[i].y-a[j].y)*(a[i].y-a[j].y));
              }
         }
     }
     for (i=2;i<=n;i++)
     if (b[i]>d) {d=b[i];}
     printf ("%.4lf\n",d);
}