int main(){
	int n,i,j;
	double w[500],z[500];
	int a[500];
	float b[500];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		w[0]=1.0;
		w[1]=2.0;
		z[0]=2.0;
		z[1]=3.0;
		b[i]=2.0;
		for(j=1;j<a[i];j++){
			b[i]+=z[j]/w[j];
			z[j+1]=z[j]+z[j-1];
			w[j+1]=w[j]+w[j-1];
		}
	}
	for(i=0;i<n;i++){
		printf("%.3f\n",b[i]);
	}
	return 0;
}

