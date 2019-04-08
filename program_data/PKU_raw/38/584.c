int main(){
	int k,n,j,i;
	double x[100],t,s;
	scanf("%d",&k);
	for ( i=0;i<k;i++){
		scanf("%d",&n);
		t=0;
		for ( j=0;j<n;j++){
			scanf("%lf",&x[j]);
			t+=x[j];
		}
		t/=n;
		s=0;
		for ( j=0;j<n;j++){
			s+=(x[j]-t)*(x[j]-t);
		}
		s/=n;
		s=sqrt(s);
		printf("%.5lf\n",s);
	}
	return 0;
}
