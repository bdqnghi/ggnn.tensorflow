int main(){
	char zfc[300];
	int sz[26];
	int i,m,k,t;
	char n;
	t=0;
	scanf("%s",zfc);
	m=strlen(zfc);
	for(k=0;k<26;k++){
		sz[k]=0;
	}
	for((n=97,k=0);(n<123&&k<26);(n++,k++)){
		for(i=0;i<m;i++){
			if(zfc[i]==n){
				sz[k]++;
			}
		}
		if(sz[k]>0){
			printf("%c=%d\n",n,sz[k]);
			t++;
		}
	}
	if(t==0){
		printf("No");
	}
	return 0;
}

