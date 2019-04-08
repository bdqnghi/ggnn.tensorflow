int main(){
    int n,i,j,k,y,m,d,c;
	double sz[100],sum=0.0,S=0.0,x;
	scanf ("%d",&n);
	for (i=0;i<n;i++){
		scanf ("%d",&c);
		for (j=0;j<c;j++){
		scanf ("%lf",&sz[j]);
		sum+=sz[j];
		}
		d=c;
		c=c*1.0;
		x=sum/c;
		for (k=0;k<d;k++){
           S+=(sz[k]-x)*(sz[k]-x);
		}
		S=sqrt(S/c);
		printf("%.5lf\n",S);
		sum=0.0,S=0.0;
	}

	return 0;
}