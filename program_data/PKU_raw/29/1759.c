int main(){
	int b[1000],c[1000],n,m,i,j,k;
	double a[1000],num[1000];
	scanf("%d",&m);
	b[0]=2;
	b[1]=3;
	c[0]=1;
	c[1]=2;
	a[0]=1.0*b[0]/c[0];
	a[1]=1.0*b[1]/c[1];
	for(j=0;j<m;j++){
		i=2;
		num[j]=0;
		scanf("%d",&n);
	    while(i>=2&&i<n){
		   b[i]=b[i-1]+b[i-2];
		   c[i]=c[i-1]+c[i-2];
		   a[i]=1.0*b[i]/c[i];
	    	i++;
		}
		for(k=0;k<n;k++){
			num[j]=num[j]+a[k];
		}
		printf("%.3lf\n",num[j]);
	}
	return 0;
}