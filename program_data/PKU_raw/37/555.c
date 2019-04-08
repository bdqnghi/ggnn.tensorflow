
void main(){
	int t,i,j,len,judge;
	char string[10000];
	scanf("%d",&t);
	while(t--){
		for(i=0;i<10000;i++){
			string[i]='\0';
		}
		scanf("%s",&string);
		len=strlen(string);
		for(i=0;i<len;i++){
			judge=0;
			for(j=i+1;j<len;j++){
				if(string[i]==string[j]){
					string[j]='A';
					judge=1;
				}
			}
			if(judge){
				string[i]='A';
			}
		}
		for(i=0;i<len;i++){
			if(string[i]!='A'){
				printf("%c\n",string[i]);
				break;
			}else if(i==len-1){
				printf("no\n");
				break;
			}
		}
	}
}