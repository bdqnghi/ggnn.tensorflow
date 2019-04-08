int main(){
	int sz[1000],n,k;
	scanf("%d %d",&n,&k);
	for (int i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}
	int i,j;
	int ss[1000];
	for (i=j=0;i<n,j<n;i++,j++){
		ss[j]=sz[i];
	}
	int c=0;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++){
			if (sz[i]+ss[j]==k&&i!=j){
				c++;
			}
		}
	}
	if (c==0){
		printf("no");
	}else{
		printf("yes");
	}
	return 0;
}