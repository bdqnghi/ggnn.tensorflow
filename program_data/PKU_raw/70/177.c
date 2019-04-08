int main()
{
	int i,j,n;
	scanf ("%d",&n);
	double *x,*y;
	double s=0;
         double d;
	x=(double*)malloc(sizeof(double)*n);
	y=(double*)malloc(sizeof(double)*n);
	for (i=0;i<n;i++)
	{
		double x1,y1;
		scanf ("%lf%lf",&x1,&y1);
		*(x+i)=x1;
		*(y+i)=y1;
    }
	
for(i=0;i<n-1;i++)
{
		double x2,y2;
		for(j=1;j<n-i;j++)
		{
			x2=*(x+i)-*(x+i+j);
			y2=*(y+i)-*(y+i+j);
			d=sqrt(x2*x2+y2*y2);
	   		if(d>s)s=d;
		}
}
  printf ("%.4lf\n",s);
  free (x);
  free (y);
  return 0;
}
