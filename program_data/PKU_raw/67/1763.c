int main(){
	int n,x,y;
	double b,c;
	int p,q;
	scanf("%d",&n);
	scanf("%d %d",&p,&q);
	double e=p,f=q;
	    c=1.00*f/e;
	for(int i=1;i<=n-1;i++){
		scanf("%d %d",&x,&y);
		double k=x,m=y;
		b=1.00*m/k;
		if(b<c){
			if(c-b<0.05){
				printf("same\n");
			}
			else
				printf("worse\n");
		}
		else if(b>c){
			if(b-c>0.05){
				printf("better\n");
			}
			else
				printf("same\n");
		}
	}
	return 0;
}


