int main()
{
  double a[100][2];
  double dis=0;
  int i,j;
  double distance(double x1,double y1,double x2,double y2);
  double max(double d1,double d2);
  int n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  scanf("%lf %lf",&a[i][0],&a[i][1]);
  for(i=0;i<n;i++)
   for(j=i+1;j<n;j++)
    dis=max(distance(a[i][0],a[i][1],a[j][0],a[j][1]),dis);
  printf("%.4f\n",(float)dis);
  return 0;
}
  double distance(double x1,double y1,double x2,double y2)
 {
  double distance;
  distance=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
  return distance;
 }
  double max(double d1,double d2)
 {
  double max=d2;
  if(d1>d2)
   max=d1;
  return max;
 }
