int main(){
	int sz[1000];
	int m,n,i,k,result,mark=0,j=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++){
		scanf("%d",&sz[i]);
	}for(i=0;i<n;i++){
		for(k=1;k<n-i;k++){
			result=sz[i]+sz[i+k];
			if(result==m&&j==0){
				printf("yes");
				j++;
			mark=1;
			}
		}
	}if(mark==0){
		printf("no");
	}return 0;
}
