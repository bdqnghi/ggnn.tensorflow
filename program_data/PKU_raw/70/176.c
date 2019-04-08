
 int main()
 {
  int n;
  scanf("%d",&n);
  struct point{
   double x,y;
  }*points;
  points=(struct point *)malloc(sizeof(struct point)*n);
  int i;
  for (i=0;i<n;i++)
  {
   scanf("%lf%lf",&points[i].x,&points[i].y);
  }
  double *s;
  s=(double*)malloc(sizeof(double)*((n-1)*(n-1)));
  int j,k;
  for (j=0;j<n-1;j++)
  {
	  for (k=0;k<n-1;k++)
	  {
		  s[j*(n-1)+k]=pow(pow(((points[j].x-points[k].x)*(points[j].x-points[k].x)+(points[j].y-points[k].y)*(points[j].y-points[k].y)),2),0.25);
	  }
  }
  double a=s[0];
  int w;
  for (w=0;w<(n-1)*(n-1);w++)
  {
	  if (a>s[w+1])a=a;
	  else a=s[w+1];
  }
  printf("%.4f\n",a);
 
  return 0;
 }
 
