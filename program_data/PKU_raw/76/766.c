int main(){
	int n,i,j,max,min;
	int a[MAX],b[MAX];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(i==0){
			min=a[i];
			max=b[i];
		}
		else{
			if(a[i]<min)
				min=a[i];
			if(b[i]>max)
				max=b[i];
		}
	}
	for(j=min;j<max;j++){
		for(i=0;i<n;i++){
			if(j+0.5>a[i]&&j+0.5<b[i])
				break;
		}
		if(i==n){
			printf("no");
			break;
		}
	}
	if(j==max)
		printf("%d %d",min,max);

}