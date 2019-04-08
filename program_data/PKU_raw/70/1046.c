struct point
{
   double x;
   double y;
};
int main()
{
   int n,i,j;
   struct point *a;
   double maxd=0,d;
   scanf("%d",&n);
   a=(struct point *)malloc(sizeof(struct point)*n);
   for (i=0;i<n;i++)
   {
      scanf("%lf %lf",&((a+i)->x),&((a+i)->y));
   }
   for (i=0;i<n;i++)
     for (j=0;j<n;j++)
     {
         d=((a+i)->x-(a+j)->x)*((a+i)->x-(a+j)->x)+((a+i)->y-(a+j)->y)*((a+i)->y-(a+j)->y);
         if (d>maxd) maxd=d;
     }
   printf("%.4f",sqrt(maxd));
}

