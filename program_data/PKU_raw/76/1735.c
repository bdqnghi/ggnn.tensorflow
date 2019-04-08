int main(){
	int n,a[50000],b[50000],sz[10000];
	scanf("%d",&n);
	for(int j=0;j<n;j++){
		scanf("%d%d",&a[j],&b[j]);
	}
	int min=a[0];
	for(int m=0;m<n-1;m++){
		if(min>a[m+1]){
			min=a[m+1];
		}
	}
	int max=b[0];
	for(int k=0;k<n-1;k++){
		if(max<b[k+1]){
			max=b[k+1];
		}
	}
	int i=0;
	double ts;
	for(i=min;i<max;i++){
		sz[i]=0;
		ts=1.0*i+0.5;
		for(int t=0;t<n;t++){
			if((ts<=b[t])&&(ts>=a[t])){
				sz[i]=1;
				break;
			}
		}
	}
	int ans=sz[min];
	for(i=min+1;i<max;i++){
		ans*=sz[i];
	}
	if(ans==0){
		printf("no");
	}
	else{
		printf("%d %d",min,max);
	}
	return 0;
}
