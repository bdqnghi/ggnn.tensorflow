int main(){
    int n,x,y,i;
	double z;
    scanf("%d",&n);
    double *a=(double *)malloc(sizeof(double)*n);
    for(i=0;i<n;i++){
		scanf("%d %d",&x,&y);
		a[i]=1.0*y/x;
	}
	for(i=1;i<n;i++){
		z=a[i]-a[0];
		if(z>0.05){
			printf("better\n");
		}else if(z<-0.05){
			printf("worse\n");
		}else if(z>=-0.05&&z<=0.05){
			printf("same\n");
		}
	}
	return 0;
}