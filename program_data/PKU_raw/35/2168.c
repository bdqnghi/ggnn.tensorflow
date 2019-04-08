int main(){
	int m,n,i,j,x=0;
	scanf("%d,%d",&n,&m);
	int s[8][8],z[8]={0};
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&s[i][j]);
			if(s[i][z[i]]<s[i][j]){
				z[i]=j;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(s[i][z[i]]>s[j][z[i]]){
				break;
			}
			if(j==n-1){
				printf("%d+%d",i,z[i]);
				x=1;
			}
		}
	}
	if(x==0){
		printf("No");
	}
	return 0;
}