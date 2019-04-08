int main(){
	int n;
	scanf("%d",&n);
	int result1[MAX];
	int i;
	for(i=0;i<MAX;i++){
		result1[i]=0;
	}
	int p=1;
	int j=0;
	result1[0]=1;
	for(i=0;i<n;i++){
		for(j=0;j<MAX;j++){
			result1[j]=result1[j]*2;
		}
		for(j=0;j<MAX;j++){
			if(result1[j]>9){
			result1[j]=result1[j]-10;
			result1[j+1]++;
			}
		}
	}
	int m[MAX];
	for(i=0;i<MAX;i++){
		m[i]=result1[MAX-1-i];
	}
	j=0;
	while(j<MAX){
		if(m[j]==0){
			j++;
		}else{
			break;
		}
	}
	for(i=j;i<MAX;i++){
		printf("%d",m[i]);
	}
	printf("\n");
	return 0;
}