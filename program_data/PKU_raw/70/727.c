int main()
{
	int n,i,j,a=0;
	scanf("%d",&n);
	double *x,*y,*z;
	double s,*s1;
	x=(double *)malloc(sizeof(double)*n);
	y=(double *)malloc(sizeof(double)*n);
    z=(double *)malloc(sizeof(double)*n);
    s1=(double *)malloc(sizeof(double)*n);
 	for(i=0;i<n;i++){
		scanf("%lf %lf",&x[i],&y[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a==0){
			   s=pow(x[j]-x[i],2)+pow(y[j]-y[i],2);
			   a=1;
			}
			s1[j]=pow(x[j]-x[i],2)+pow(y[j]-y[i],2);
			if(s1[j]>s) {
				s=s1[j];
		}
		z[i]=s;
	}
	}
    int max=0; 
	for(i=0;i<n;i++){
		if(z[i]>z[max])
			max=i;
	}
	printf("%.4lf\n",sqrt(z[max]));
	return 0;
}

		


