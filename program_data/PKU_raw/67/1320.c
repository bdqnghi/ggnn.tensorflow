int main(){
	int n,a,b,c,d;
	double biao,linshi;
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	biao=(double)b/(double)a;
	for(int i=0;i<n-1;i++){
		scanf("%d %d",&c,&d);
		linshi=(double)d/(double)c;
		if(biao-linshi>=0.05){
			printf("worse\n");
		}
		  else if(linshi-biao>=0.05){
			printf("better\n");
		}
		else {
			printf("same\n");
			}
	}
	return 0;
}
