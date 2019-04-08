int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	int a[1000];
	int i;
	int s=0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				printf("yes");
				s++;
				break;
			}
		}
		if(s!=0)
			break;
	}
	if(s==0)
		printf("no");
	return 0;  
}