int main()
{
	int n,zong[100],yx[100],i;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d %d\n",&zong[i],&yx[i]);
	}
	for(i=1;i<n;i++){
		if((double)yx[0]/zong[0]-(double)yx[i]/zong[i]>=0.05){
			printf("worse\n");
		}
		else if((double)yx[i]/zong[i]-(double)yx[0]/zong[0]<=0.05){
			printf("same\n");
		}
		else {
			printf("better\n");
		}
	}
	return 0;
}
