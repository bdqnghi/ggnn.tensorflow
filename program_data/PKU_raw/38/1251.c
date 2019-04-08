
int main()
{
	int i,j,k,n;
	double *a,sum=0.0,x,s0=0.0,s;
	scanf("%d",&k);
    
	for(i=0;i<k;i++){
		scanf("%d",&n);
		a=(double *)malloc(sizeof(double)*n);
			for(sum=0.0,j=0;j<n;j++){
                scanf("%lf",&a[j]);
				sum += a[j];
			}
			x=sum/n;
			for(s0=0.0,j=0;j<n;j++){
			   s0+=(a[j]-x)*(a[j]-x);
			   s=sqrt(s0/n);
			}
             printf("%.5lf\n",s);
	}
	free(a);
	return 0;
}
