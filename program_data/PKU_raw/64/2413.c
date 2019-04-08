int main(){
	int n,i,j,k=0,p,q;
	double t;
	scanf("%d",&n);
	double x[200];
	double y[200];
	double z[200];
	double jl[200][200];
	double jljl[200];
	double dhi[200];
	double dhj[200];
	for(i=0;i<n;i++){
		scanf("%lf",&(x[i]));
		scanf("%lf",&(y[i]));
		scanf("%lf",&(z[i]));
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			jl[i][j]=sqrt(((x[j])-(x[i]))*((x[j])-(x[i]))+((y[j])-(y[i]))*((y[j])-(y[i]))+((z[j])-(z[i]))*((z[j])-(z[i])));
			jljl[k]=jl[i][j];
			dhi[k]=i;
			dhj[k]=j;
			k++;
		}
	}
	for(i=0;i<n*(n-1)/2;i++){
		for(j=n*(n-1)/2-1;j>i;j--){
			if(jljl[j]>jljl[j-1]){
				t=jljl[j];
				jljl[j]=jljl[j-1];
				jljl[j-1]=t;
				t=dhi[j];
				dhi[j]=dhi[j-1];
				dhi[j-1]=t;
				t=dhj[j];
				dhj[j]=dhj[j-1];
				dhj[j-1]=t;
			}
		}
	}
	k=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			jl[i][j]=jljl[k];
			p=(int)dhi[k];
			q=(int)dhj[k];
			k++;
			printf("(%.0lf,%.0lf,%.0lf)-(%.0lf,%.0lf,%.0lf)=%.2lf\n",x[p],y[p],z[p],x[q],y[q],z[q],jl[i][j]);
		}
	}
	return 0;
}
