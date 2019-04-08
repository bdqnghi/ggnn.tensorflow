int main(){
	double bingli[N][2];
	int n,i;
	double x,y;
	scanf("%d",&n);
	scanf("%lf %lf",&bingli[0][0],&bingli[0][1]);
	x=bingli[0][1]/bingli[0][0];
	for(i=1;i<n;i++){
		scanf("%lf %lf",&bingli[i][0],&bingli[i][1]);
		y=bingli[i][1]/bingli[i][0];
		if((y-x)>0.05){
			printf("better\n");
		}else if((x-y)>0.05){
			printf("worse\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}