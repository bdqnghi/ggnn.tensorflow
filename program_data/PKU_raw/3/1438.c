int main(){
	int n,k,i;
	int a[1000];
	int b[1000];
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++){
		scanf("%d",&(a[i]));
	}
    for(i=1;i<=n;i++){
		b[i]=k-a[i];
	}
	for(int m=1;m<=n;m++){
		for(i=1;i<=n;i++){
			if(a[m]==b[i]){
				printf("yes");
                return 0;
			}
		}
	}
		printf("no");
		return 0;
}
		
