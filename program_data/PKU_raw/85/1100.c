


int main(){
	int n,i,j,judge=0;
	char zfc[21];
	scanf("%d",&n);

	for(i=0;i<n;i++){
		if(i==0){
			getchar();
		}
		gets(zfc);
		for(j=1;j<strlen(zfc);j++){
			if((zfc[0]>='a'&&zfc[0]<='z')||(zfc[0]>='A'&&zfc[0]<='Z')||zfc[0]=='_'){
				judge=1;
				if((zfc[j]>='a'&&zfc[j]<='z')||(zfc[j]>='A'&&zfc[j]<='Z')||zfc[j]=='_'||(zfc[j]>='0'&&zfc[j]<='9')){
					judge=1;
				}else{
					judge=0;
					break;
				}
			}else{
				judge=0;
				break;	
			}
		}

		if(judge==0){
			printf("no\n");
		}else{
			printf("yes\n");
		}
	}
	return 0;
}