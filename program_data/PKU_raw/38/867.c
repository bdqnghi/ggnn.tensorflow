int main(){
	int i,j,k,n[100];
	double x[100][100],y[100],a[100],b[100],c[100],S[100];
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n[i]);
		y[i]=0.0;
		for(j=0;j<n[i];j++){
    		scanf("%lf",&x[i][j]);
			y[i]+=x[i][j];
		}
		a[i]=y[i]/n[i];
	}
	for(i=0;i<k;i++){
		b[i]=0.0;
		for(j=0;j<n[i];j++){
			b[i]+=(x[i][j]-a[i])*(x[i][j]-a[i]);
		}
		c[i]=b[i]/n[i];
		S[i]=sqrt(c[i]);
	}
	for(i=0;i<k;i++){
    	printf("%.5lf\n",S[i]);
	}
	return 0;
}
