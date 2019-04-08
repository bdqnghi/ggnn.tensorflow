
void main()
{
	int k,n,i;
	double *x;
	scanf("%d",&k);
	while(k--){
		double sum=0,sum2=0,a,s;
		scanf("%d",&n);
		x=(double*)malloc(1000*sizeof(double));
		for(i=0;i<n;i++) {
			scanf("%lf",x+i);
			sum+=*(x+i);
		}
		a=sum/n;
		for(i=0;i<n;i++) sum2+=((*(x+i)-a)*(*(x+i)-a));
		s=sqrt(sum2/n);
		printf("%.5f\n",s);
	}
}

		

