

int main ()
{
int n;
scanf("%d",&n);
int i,k;
double x[100],y[100],m=0;
 for (i=0;i<n;i++)
 {
	scanf("%lf%lf",&x[i],&y[i]);
 }
    for (i=0;i<n;i++)
	{
		for (k=i+1;k<n;k++)
		{
         if (m<sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k])))
			 m=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k]));
		}
	}
   
  printf("%.4lf\n",m);
  return 0;
}
