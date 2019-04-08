
int main(){
	int sz[100][100],n,tiaohuai[100],sum[100]={0},i,k,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&tiaohuai[i]);
		if(tiaohuai[i]==0){
			continue;
		}
		for(k=0;k<tiaohuai[i];k++){
			scanf("%d",&sz[i][k]);
		}
	}
	for(i=0;i<n;i++){
		if(tiaohuai[i]==0){
			sum[i]=60;
			continue;
		}
		for(k=0;k<tiaohuai[i];k++){
			j=sz[i][k]+3*k;
			if(j>60){
				if(sz[i][k-1]+3*k>=60){
					sum[i]=sz[i][k-1];
					break;
				}else{
					sum[i]=60-3*k;
					break;
				}
			}
		}
		if(sum[i]==0){
			if(j+3<=60){
				sum[i]=60-tiaohuai[i]*3;
			}else{
				sum[i]=sz[i][k-1];
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",sum[i]);
	}
	return 0;
}