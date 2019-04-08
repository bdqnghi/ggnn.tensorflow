int main(){
	int i,k,n,n1,l;
	double sz[1000];
	double m[1000];
	double m2[10000];
	double sum[1000];
	double summ[1000];
	for(l=0;l<1000;l++){
	sum[l]=0;
	summ[l]=0;
	m[l]=0;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&n1);
		for(k=0;k<n1;k++){
		scanf("%lf",&sz[k]);
		sum[i]+=sz[k];
		}
		m[i]=sum[i]/n1;
		for(k=0;k<n1;k++){
			summ[i]+=(sz[k]-m[i])*(sz[k]-m[i]);
			m2[i]=sqrt((summ[i])/n1);
		}
        
	}
		for(i=0;i<n;i++){
			printf("%.5lf\n",m2[i]);
		}
return 0;
}