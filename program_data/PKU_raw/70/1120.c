int main()
{
	int i,j,n;
	scanf("%d",&n);
	double m=0,a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%lf %lf",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]))>m)
			   m=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
		}
	}
	printf("%.4lf",m);
	
}