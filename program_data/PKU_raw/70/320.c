double juli(double m,double n,double x,double y)
{
     double z;
     z=sqrt((m-x)*(m-x)+(n-y)*(n-y));
     return(z);
}
void main()
{
     int i,j,t;
     double a[20][2],c=0;
     scanf("%d\n",&t);
     for(i=0;i<t;i++)
        scanf("%lf%lf\n",&a[i][0],&a[i][1]);
     for(i=0;i<t-1;i++)
     for(j=i+1;j<t;j++)
       {
      if(juli(a[i][0],a[i][1],a[j][0],a[j][1])>=c)
         c=juli(a[i][0],a[i][1],a[j][0],a[j][1]);
          }
      printf("%.4lf",c);
}
