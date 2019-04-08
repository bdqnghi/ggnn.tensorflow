int main(){
	int n,i,j,l;
	scanf("%d",&n);
	char zfc[100][21];
	for(i=0;i<n;i++){
		scanf("%s",&zfc[i]);
	}
	for(i=0;i<n;i++){
		l=strlen(zfc[i]);
		for(j=0;j<l;j++){
			if(zfc[i][j]>='0'&&zfc[i][j]<='9'&&!(zfc[i][0]>='0'&&zfc[i][0]<='9')){
				continue;
			}
			else if(zfc[i][j]>='a'&&zfc[i][j]<='z'){
				continue;
			}
			else if(zfc[i][j]>='A'&&zfc[i][j]<='Z'){
				continue;
			}
			else if(zfc[i][j]=='_'){
				continue;
			}
			else{
				printf("no\n");
				break;
			}
		}
		if(j==l){
			printf("yes\n");
		}
	}
	return 0;
}