int main(){
	int n,i,k;
	scanf("%d",&n);
	int m[n];
	double sum[n],s[n];
	double num[n][1000];
	for(i=0;i<n;i++){
		scanf("%d",&m[i]);
		for(k=0;k<m[i];k++){
			scanf("%lf",&num[i][k]);
		}
	}
	for(i=0;i<n;i++){
		sum[i]=0.0;
		s[i]=0.0;
		for(k=0;k<m[i];k++){
			sum[i]+=num[i][k];
		}
		for(k=0;k<m[i];k++){
			s[i]+=(num[i][k]-sum[i]/m[i])*(num[i][k]-sum[i]/m[i]);
		}
		printf("%.5f\n",sqrt(s[i]/m[i]));
	}
	return 0;
}

