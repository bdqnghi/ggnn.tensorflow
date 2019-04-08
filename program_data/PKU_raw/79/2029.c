int findking(int m,int n);
int main(){
	int m[300];
	int n[300];
	int king[300];
	int i;
	for(i=0;i<300;i++){
		scanf("%d%d",&n[i],&m[i]);
		if((m[i]==0)&&(n[i]==0)){
			break;
		}
	}
	for(i=0;i<300;i++){
		if(m[i]==0&&n[i]==0){
			break;
		}
		king[i]=findking(m[i],n[i]);
	}
	for(i=0;i<300;i++){
		if((m[i]==0)&&(n[i]==0)){
			break;
		}
		printf("%d\n",king[i]);
	}
	return 0;
}
int findking(int m,int n){
	int i=0,num=0,zero=0,king;
	int sz[300]={0};
	while(1){
		zero=0;
		for(int j=0;j<n;j++){
			if(sz[j]==0){
				zero++;
			}
		}
		if(zero==1){
			break;
		}
		if(sz[i]==1){
				if(i==(n-1)){
			i=0;
		}else{
			i++;
		}
			continue;
		}
		num++;
		if(num==m){
			sz[i]=1;
			num=0;
		}
		if(i==(n-1)){
			i=0;
		}else{
			i++;
		}
	}
	for(i=0;i<n;i++){
		if(sz[i]==0){
			king=i+1;
		}
	}
	return king;
}
