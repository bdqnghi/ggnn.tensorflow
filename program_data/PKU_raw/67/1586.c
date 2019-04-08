int main(){
	int n,i,x,y,a,b;
	double p,q;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		if(i==0){
			scanf("%d%d",&x,&y);
			p=1.0*y/x;
		}else{
			scanf("%d%d",&a,&b);
			q=1.0*b/a;
			if(q-p>0.05){
				printf("better\n");
			}else if(p-q>0.05){
				printf("worse\n");
			}else{
				printf("same\n");
			}
		}
	}
	return 0;
}