int main(){
	int n,a[300],i,k,want=-1;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(k=0;k<n-1;k++){
		for(i=k+1;i<n;i++){
			if(a[k]==a[i]){
				a[i]=0;
			}
		}
	}
	for(i=0;i<n;i++){
		if(want==-1){
			printf("%d",a[i]);
			want=0;
		}else{
		if(a[i]!=0){
			printf(",%d",a[i]);
		}
		}
	}
	return 0;
}
			