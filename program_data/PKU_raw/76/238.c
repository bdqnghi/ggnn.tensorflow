int main(){
	int n;
	scanf("%d",&n);
	int sz[50000][2];
	int i=0;
	for(i=0;i<n;i++){
		scanf("%d%d",&sz[i][0],&sz[i][1]);
	}
	int min=10001;
	int max=0;
	for(i=0;i<n;i++){
		if(min>sz[i][0]){
			min=sz[i][0];
		}
		if(max<sz[i][1]){
			max=sz[i][1];
		}
	}
	
	int j;
	int k=0;
	int sum=0;
	for(j=min;j<=max;j++){
		sum=k*(sum+k);
		if(sum!=0){
			break;
		}

		for(i=0;i<n;i++){
			
			if(j>=sz[i][0]&&j<sz[i][1]){
				k=0;
				break;
			}
			k=1;
		}
	}
	if(sum==0){
		printf("%d %d",min,max);
	}else{
		printf("no");
	}
	return 0;
}