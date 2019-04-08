int main(){
	int n;
	scanf("%d",&n);
		int a[MAX],b[MAX];
	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	int sum1=0;
	int sum2=0;
	for(int k=0;k<n;k++){
		if(a[k]-b[k]==-1){
			sum1=sum1+1;
		}else if(a[k]-b[k]==1){
			sum2=sum2+1;
		}else if(a[k]-b[k]==2){
			sum1=sum1+1;
		}else if(a[k]-b[k]==-2){
			sum2=sum2+1;
		}else if(a[k]==b[k]){
			sum1=sum1+1;
			sum2=sum2+1;
		}
	}
	if(sum1>sum2){
		printf("A");
	}else if(sum1<sum2){
		printf("B");
	}else{
		printf("Tie");
	}
	return 0;
}
