int main(){
	int n,m,i,j,zhan,t,you=0,pan;
	scanf("%d,%d",&n,&m);
	int s[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&s[i][j]);
		}
	}
	for(i=0;i<n;i++){
		zhan=s[i][0];
		t=0;
		for(j=1;j<m;j++){
			if(s[i][j]>zhan){
				zhan=s[i][j];
				t=j;
			}
		}
		pan=1;
		for(j=0;j<n;j++){
			if(s[j][t]<s[i][t]){
				pan=0;
			}
		}
		if(pan==1){
			printf("%d+%d\n",i,t);
			you=1;
		}
	}
	if(you==0){
		printf("No\n");
	}
	return 0;
}