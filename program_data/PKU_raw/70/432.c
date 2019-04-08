
int main()
{
     int n,i,k;
     scanf("%d",&n);
     double l=0,lest=0;
     double *x;
     x=(double*)malloc(sizeof(double)*n);
     double *y;
     y=(double*)malloc(sizeof(double)*n);
     for(i=0;i<n;i++)
	 {
         scanf("%lf%lf",&x[i],&y[i]);
	 }
	 for(i=0;i<n;i++)
	 {
		 for(k=i+1;k<n;k++)
		 {
			 l=sqrt((x[i]-x[k])*(x[i]-x[k])+(y[i]-y[k])*(y[i]-y[k]));
			 if(lest<l)
			 {
				 lest=l;
			 }
		 }
	 }
     printf("%.4lf\n",lest);
     free(x);
     free(y);
     return 0;
}
