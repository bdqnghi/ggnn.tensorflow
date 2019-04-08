int main() {
	int i,j,k,n;
	double * a,sum,aver;
	scanf("%d",&k);
	for (i=0;i<k;i++) {
		scanf("%d",&n);
		a = (double *)malloc(n);
	 
		sum = 0.0;
		for (j=0;j<n;j++) {
			scanf("%lf",&a[j]);
			sum+=a[j];
		} 
		aver = sum/(double)n;
		sum = 0;
		for (j=0;j<n;j++) {
		   sum+=(a[j]-aver)*(a[j]-aver);
		} 
		aver = sqrt((sum)/(double)n);
		printf("%.5lf\n",aver);
	}

	return 0;
}