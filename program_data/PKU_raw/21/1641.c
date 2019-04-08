int main(){
	int n;
	scanf("%d",&n);
	int sz[LEN];
	int sum=0;
	for(int i=0;i<n;i++){
		scanf("%d",&sz[i]);
		sum+=sz[i];
	}
	double junzhi;
	junzhi=1.0*sum/n;
	int min=sz[0];
	int max=sz[0];
	for(int r=0;r<n;r++){
		if(sz[r]>max){
			max=sz[r];
		}
		if(sz[r]<min){
			min=sz[r];
		}
	}
	if(1.0*(max+min)/2==junzhi){
		printf("%d,%d",min,max);
	}else if(junzhi-min>max-junzhi){
		printf("%d",min);
	}else{
		printf("%d",max);
	}
	return 0;
}