int  main(){
	int n,i;
	double a[100],b[100];
	double m,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf%lf",&a[i],&b[i]);
	}
	m=b[0]/a[0];
	for(i=1;i<n;i++){
		t=b[i]/a[i];
		if(t-m>0.05){
			printf("better\n");
		}else if(m-t>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}
