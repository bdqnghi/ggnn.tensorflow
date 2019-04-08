int main(){
	int n,i;
	double x,y;
	scanf("%d",&n);
	
	int *zong=(int*)malloc(sizeof(int)*n);
	int *you=(int*)malloc(sizeof(int)*n);
	
	for(i=0;i<n;i++){
		scanf("%d%d",&zong[i],&you[i]);
	}
	x=((double)you[0])/(zong[0]);
	for(i=1;i<n;i++){
		y=((double)you[i]/zong[i]);
		if(y-x>0.05){
			printf("better");
		}
		if(x-y>0.05){
			printf("worse");
		}
		if(x-y<=0.05&&y-x<=0.05){
			printf("same");
		}
		if(i<n){
			printf("\n");
		}
	}
	return 0;
}
