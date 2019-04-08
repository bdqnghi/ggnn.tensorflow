main()
{
    double a[100][2];
    int n;
    int i,j;
    double x2,y2;
    double  distance=0;
    double  dis;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf",&a[i][0],&a[i][1]);
    }
  
    for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
           x2=(a[j][0]-a[i][0])*(a[j][0]-a[i][0]);
           y2=(a[i][1]-a[j][1])*(a[i][1]-a[j][1]);
           dis=sqrt(x2+y2);
           if(dis>=distance)
           distance=dis;
       }
   }
     printf("%.4f",distance);

}
