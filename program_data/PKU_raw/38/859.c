int main(){
	int i,j,k,n;
	double sum,a,b,S;
	double x[100];
	scanf("%d",&k);
	for(j=0;j<k;j++){
		sum=0.0;
		a=0.0;
		b=0.0;
		S=0.0;
		scanf("%d",&n);
		for(i=0;i<n;i++){
			scanf("%lf",&x[i]);
			sum+=x[i];
		}
		a=sum/n;
        for(i=0;i<n;i++){
			b+=(x[i]-a)*(x[i]-a);
		}
		S=sqrt(b/n);
		printf("%.5f\n",S);

	}
        
	
	return 0;

}
