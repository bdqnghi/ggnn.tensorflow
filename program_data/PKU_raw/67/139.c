int main(){
	int n,i;
	int a,b,c,d;
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	for(i=1;i<n;i++){
		scanf("%d%d",&c,&d);
        if((double)d/c-(double)b/a>0.05){
			printf("better\n");
		}else if((double)b/a-(double)d/c>0.05){
			printf("worse\n");
		}else{
            printf("same\n");
		}
	}

	return 0;
}
