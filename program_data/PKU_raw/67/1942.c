int main(){
	int i=0,n;
	scanf("%d",&n);
	double*za=(double*)malloc(sizeof(double)*n);
	int*a=(int*)malloc(sizeof(int)*n);
	int*b=(int*)malloc(sizeof(int)*n);
	if(i==0){
		scanf("%d%d",&a[i],&b[i]);
		za[i]=1.0*b[i]/a[i];
	}
	for(i=1;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		za[i]=1.0*b[i]/a[i];
		if(za[i]-za[0]>0.05){
			printf("better\n");
		}else if(za[0]-za[i]>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	free(za);
	free(a);
	free(b);
	
	return 0;
}