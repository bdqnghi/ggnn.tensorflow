int main(){
	int k;
	scanf("%d",&k);
	int i,n[101],j;
	double x[1001];
	for(i=0;i<k;i++){
		double a=0,s=0;
		scanf("%d",&n[i]);
		for(j=0;j<n[i];j++){
			scanf("%lf",&x[j]);
			a=a+x[j];
		}
		a=a/(double)n[i];
		for(j=0;j<n[i];j++){
            s=s+(x[j]-a)*(x[j]-a);
		}
		s=sqrt(s/(double)n[i]);
		printf("%.5lf\n",s);
	}
	return 0;
}