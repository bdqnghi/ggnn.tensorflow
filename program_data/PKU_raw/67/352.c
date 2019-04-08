int main()
{
	double sz[100],a[100],b[100];
	int i,n;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf\n",&sz[i],&b[i]);
		a[i]=b[i]/sz[i]*100;
	}
	for(i=1;i<n;i++){

		if(a[i]-a[0]<-5){
			printf("worse\n");
		}
		if(a[i]-a[0]>5){
			printf("better\n");
		}
		if(a[i]-a[0]>-5&&a[i]-a[0]<5){
			printf("same\n");
		}
	}
	return 0;



}