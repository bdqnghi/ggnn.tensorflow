int main(){
	int n,b=0,k=0;
	int sz[10000];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int s=0;
		for(int j=2;j<i;j++){
			if(i%j==0){
				s++;
			}
		}
		if(s==0){
			sz[k]=i;
			k++;
		}
	}
	for(int a=0;a<=10000;a++){
		if(sz[a+1]-sz[a]==2){
			printf("%d %d\n",sz[a],sz[a+1]);
			b++;
		}
	}
	if(b==0){
		printf("empty");
	}
	return 0;
}
