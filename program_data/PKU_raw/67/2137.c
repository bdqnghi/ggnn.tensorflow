int main(){
	int n,a,b,s,l,i;
	double c;
	scanf("%d%d%d",&n,&a,&b);
	c=1.0*b/a;
    for(i=0;i<n-1;i++){
		scanf("%d%d",&s,&l);
		double f=1.0*l/s;
		if(f-c>0.05){
			printf("better\n");
		}else if(f-c>-0.05){
			printf("same\n");
		}else{
			printf("worse\n");
		}
	}
	return 0;
}
