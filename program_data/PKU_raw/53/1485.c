int main(){
	int n,i,j;
	int a[400][3];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i][0]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i][0]==a[j][0]){
				a[j][1]=1;
			}
		}
	}
	printf("%d",a[0][0]);
	for(i=1;i<n;i++){
		if(a[i][1]!=1){
			printf(",%d",a[i][0]);
		}
	}
	return 0;
}


	