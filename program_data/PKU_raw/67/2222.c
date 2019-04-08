int main(){
	double zbl[100],yxbl[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf%lf",&zbl[i],&yxbl[i]);
	}
	double yxl[100];
	for(i=0;i<n;i++){
		yxl[i]=yxbl[i]/zbl[i];
	}
	for(i=1;i<n;i++){
		if(yxl[0]-yxl[i]>0.05){
			printf("worse\n");
		}
		if(yxl[i]-yxl[0]>0.05){
			printf("better\n");
		}
		else if(yxl[0]-yxl[i]<=0.05&&yxl[i]-yxl[0]<=0.05){
			printf("same\n");
		}
	}
	return 0;
}

