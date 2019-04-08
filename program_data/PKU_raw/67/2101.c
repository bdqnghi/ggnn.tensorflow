int main()
{
	int n,i,k;
	scanf("%d",&n);
	int haart[1000][2];
	for(i=0;i<=n-1;i++){
		for(k=0;k<=1;k++){
			scanf("%d",&(haart[i][k]));
		}
	}
	float sta;
	sta=(float)haart[0][1]/(float)haart[0][0];
	float cmp;
	for(i=1;i<=n-1;i++){
		cmp=(float)haart[i][1]/(float)haart[i][0];
		if(sta-cmp>0.05){
			printf("worse\n");
		}else if(cmp-sta>0.05){
			printf("better\n");
		}else{
			printf("same\n");
		}
	}
	return 0;
}