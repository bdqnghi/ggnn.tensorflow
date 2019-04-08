int main(){
	int n,t[100],e[100],total,effect,i;
	double x,y[100];
	scanf("%d",&n);
	scanf("%d%d",&total,&effect);
	x=100.0*effect/total;
	for(i=0;i<(n-1);i++){
		scanf("%d%d",&t[i],&e[i]);
		y[i]=100.0*e[i]/t[i];
	}
	for(i=0;i<(n-1);i++){
		if((y[i]-x)>5){
			printf("better\n");
		}
		if((x-y[i])>5){
			printf("worse\n");
		}
		if(((y[i]-x)<=5)&&((x-y[i])<=5)){
			printf("same\n");
		}
	}
	return 0;
}