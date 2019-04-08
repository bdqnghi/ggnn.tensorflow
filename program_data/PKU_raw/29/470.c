int main(){
	int m;
	int xiangshu;
	int shulie[100];
	double result[100];
	double sum[100];
	int i;
	int j;
	for(i=0;i<100;i++){
		sum[i]=0.0;
	}
	shulie[0]=1;
	shulie[1]=2;
	for(i=2;i<100;i++){
		shulie[i]=shulie[i-1]+shulie[i-2];
	}
	for(i=0;i<99;i++){
		result[i]=shulie[i+1]*1.0/shulie[i];
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&xiangshu);
		for(j=0;j<xiangshu;j++){
			sum[i]+=result[j];
		}
	}
	for(i=0;i<m;i++){
		printf("%.3lf\n",sum[i]);
	}
	return 0;
}