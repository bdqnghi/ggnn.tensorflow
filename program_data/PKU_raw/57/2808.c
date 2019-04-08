
int main(){
	int n,len;
	int i=0;
	char wod[ROW][LEN];

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",wod[i]);
	}
	for(i=0;i<n;i++){
		len=strlen(wod[i]);		
		if(wod[i][len-1]=='r'){
			wod[i][len-2]='\0';
		}else if(wod[i][len-1]=='y'){
			wod[i][len-2]='\0';
		}else if(wod[i][len-1]=='g'){
			wod[i][len-3]='\0';
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",wod[i]);
	}
	return 0;
}