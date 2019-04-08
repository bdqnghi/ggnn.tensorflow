  struct point 
   {
     double x;
     double y;
     
   };
main ()
{
   struct point p[20];
   int n;
   scanf ("%d\n",&n);
   int i,j;
   for (i=0;i<n;i++)
   {
     scanf ("%lf%lf\n",&p[i].x,&p[i].y);
   }
      double dis[400] ;
      double t;
      int k=0;
      for (i=0;i<n-1;i++)
      {
         for (j=i+1;j<n;j++)
         {
            t=(p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y);
            dis[k] =sqrt (t);
            k++;
         }
      }
    double max=dis [0];
    for (i=1;dis[i]!='\0';i++)
          {
          if (dis [i]>max)
            max =dis [i];
          
          }

        printf ("%.4lf\n",max);


getchar ();
getchar ();



}
