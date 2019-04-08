int main()
{
 int n,i,j; 
 struct point
 {
  double x,y;
 }p[1000]; 
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%lf%lf",&p[i].x,&p[i].y);
 double t=(p[0].x-p[1].x)*(p[0].x-p[1].x)+(p[0].y-p[1].y)*(p[0].y-p[1].y);
 for(i=0;i<n-1;i++)
 {
  for(j=1+i;j<n;j++)
  {
   if(t<sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y)))
    t=sqrt((p[i].x-p[j].x)*(p[i].x-p[j].x)+(p[i].y-p[j].y)*(p[i].y-p[j].y));
    
  }
 }
   
 
 printf("%.4lf\n",t);
 return 0;
}
 
