int main(){
	char zfc[100001];
	int t,i,k,x;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",zfc);
		for(k=0;k<strlen(zfc)-1;k++){
			for(x=0;x<strlen(zfc);x++){
				if(x!=k&&zfc[x]==zfc[k]){
					break;
				}
			}
			if(x==strlen(zfc)){
				printf("%c\n",zfc[k]);
				break;
			}
		}
		if(k==strlen(zfc)-1){
			for(x=0;x<strlen(zfc);x++){
				if(x!=k&&zfc[x]==zfc[k]){
					break;
				}
			}
			if(x==strlen(zfc)){
				printf("%c\n",zfc[k]);
				break;
			}else{
				printf("no\n");
			}
		}
	}
	return 0;
}