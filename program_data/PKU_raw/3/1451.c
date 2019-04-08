int main(){
	int n,k;
	int shuzu[1000];
	scanf("%d %d",&n,&k);

	for(int i=0;i<n;i++){
		scanf("%d",&shuzu[i]);
		
	}
	int count1=0;
	for(int j=1;j<=n;j++){
		for(int i=(j-1);i<n;i++){
			if(k==(shuzu[j]+shuzu[i])){
				count1+=1;
			}
			else continue;
		}
	}	
	if(count1!=0) printf("yes");
	else printf("no");

	return 0;
}