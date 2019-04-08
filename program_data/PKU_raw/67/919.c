int main(){
	int n,a,b,i;
	double x;
	scanf("%d\n",&n);
	scanf("%d %d\n",&a,&b);
	x=(double)b/a;
	for(i=0;i<n-1;i++){
		double y;
		int m,h;
		scanf("%d %d",&m,&h);
		y=(double)h/m;
		if(y-x>0.05){
			printf("better\n");
		}
		if(x-y>0.05){
			printf("worse\n");
		}
		if(x-0.05<=y&&y<=x+0.05){
			printf("same\n");
		}
	}
    return 0;
}