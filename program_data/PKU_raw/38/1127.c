int main(){
	int k,i,h,n;
	scanf("%d",&k);
	double *x=(double *)malloc(sizeof

(double)*k);
	double s,a,d,f;
	for(i=0;i<k;i++){
		d=0.0;
		scanf("%d",&n);
        double *x=(double *)malloc(sizeof(double)*n);
		for(h=0;h<n;h++){
			scanf("%lf",&x[h]);
			d+=x[h];
		}
		a=d/n;
		f=0.0;
		for(h=0;h<n;h++){
			f+=(x[h]-a)*(x[h]-a);
		}
		x[i]=sqrt(f/n);
		printf("%.5f\n",x[i]);
	}
	return 0;
}
     
  