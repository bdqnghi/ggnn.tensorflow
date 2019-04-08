int main(){
	double n,i;
	scanf("%lf",&n);
	double x;
	double m,p;
	scanf("%lf %lf",&m,&p);
	x=p/m;
	for(i=0;i<n-1;i++){
		double a,b;
		scanf("%lf %lf",&a,&b);
        double y;
		y=b/a;
		if(y-x>0.05){
			printf("better\n");
		}else if(x-y>0.05){
			printf("worse\n");
		}else if((y-x<=0.05)&&(y-x>=-0.05)){
			printf("same\n");
		}
	}
	return 0;
}
