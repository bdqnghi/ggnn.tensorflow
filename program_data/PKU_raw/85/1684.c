
int main(){
	char zfc[100][21];
	int n,i,k,jieguo[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("\n%s",&zfc[i]);
	}
	for(i=0;i<n;i++){
		if((zfc[i][0]>='a'&&zfc[i][0]<='z')||(zfc[i][0]>='A'&&zfc[i][0]<='Z')||zfc[i][0]=='_'){
			for(k=0;zfc[i][k]!='\0';k++){
				if((zfc[i][k]>='a'&&zfc[i][k]<='z')||(zfc[i][k]>='A'&&zfc[i][k]<='Z')||(zfc[i][k]>='0'&&zfc[i][k]<='9')||zfc[i][k]=='_'){
					continue;
				}else{
					jieguo[i]=99;
				}
			}
		}else{
			jieguo[i]=99;
		}
	}
	for(i=0;i<n;i++){
		if(jieguo[i]==99){
			printf("no\n");
		}else{
			printf("yes\n");
		}
	}
	return 0;
}