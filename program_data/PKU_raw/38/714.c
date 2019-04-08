int main(){
	int k,i,j,shu[100];
	double ju[100][100],sum[100],z[100],a[100],s[100];
	for(i=0;i<100;i++){
		sum[i]=0;
	}
    for(i=0;i<100;i++){
		s[i]=0;
	}
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&shu[i]);
		for(j=0;j<shu[i];j++){
		scanf("%lf",&ju[i][j]);
        sum[i]+=ju[i][j];
		}
		a[i]=sum[i]/shu[i];
	}
	for(i=0;i<k;i++){
		for(j=0;j<shu[i];j++){
		s[i]+=(ju[i][j]-a[i])*(ju[i][j]-a[i]);
        }
		z[i]=pow(s[i]/shu[i],0.5);
	}
    for(i=0;i<k;i++){
		printf("\n%.5lf",z[i]);
	}
	return 0;
}