int main()
{
	int n,i,j;
	double a[30],b[30],dis=0,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf",&a[i],&b[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i;j<n-2;j++){
			m=(a[i]-a[j+1])*(a[i]-a[j+1])+(b[i]-b[j+1])*(b[i]-b[j+1]);
			if(m>dis){dis=m;}
		}
	}
	dis=sqrt(dis);
	printf("%.4lf",dis);
	return 0;
}