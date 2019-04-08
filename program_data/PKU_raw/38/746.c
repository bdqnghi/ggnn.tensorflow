int main()
{
	int n,k,i,j;
double a[100][100],b,c,e,f[100];
scanf("%d",&k);
for(i=0;i<k;i++){ 
	double sum=0,d=0;
	scanf("%d",&n);
	for(j=0;j<n;j++){
		scanf("%lf",&a[i][j]);}
		for(j=0;j<n;j++){
		sum+=a[i][j];}
	    b=1.0*sum/n;
		for(j=0;j<n;j++){
		c=(a[i][j]-b)*(a[i][j]-b);
		d+=c;
	}
	e=sqrt(1.0*d/n);
	f[i]=e;
	}
for(i=0;i<k;i++){
	printf("%.5lf\n",f[i]);
}
return 0;
}
