int main(){
	int n,x[100],y[100],i;
	double z[100],k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&x[i],&y[i]);
		z[i]=1.0*y[i]/x[i];
	}
	for(i=1;i<n;i++){
		k=z[i]-z[0];
		if(k>0.05){
			printf("better\n");
		}
		if(k<0.05&&k>-0.05){
			printf("same\n");
		}
		if(k<-0.05){
			printf("worse\n");
		}
	}
	return 0;
}