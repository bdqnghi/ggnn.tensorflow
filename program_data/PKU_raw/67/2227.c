int main()
{
	int n;
	scanf("%d",&n);
	int a,b;
	scanf("%d%d",&a,&b);
	double p,q;
	p=1.0*b/a;
	int i;
	for(i=1;i<=n-1;i++){
		int x,y;
		scanf("%d%d",&x,&y);
		q=1.0*y/x;
		if(i==n-1){
			if(q-p>0.05){
				printf("better");
			}else if(p-q>0.05){
				printf("worse");
			}else{
				printf("same");
			}
		}else{
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