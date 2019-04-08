int main(){
	int n,i,j,len;
	char word[51][33];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",word[i]);
		
	}
	for(i=0;i<n;i++){
		len=strlen(word[i]);
		for(j=len;j>0;j--){
			
			if((word[i][j]=='r')&&(word[i][j-1]=='e')){
				word[i][j-1]='\0';
				break;
			}else if((word[i][j]=='y')&&(word[i][j-1]=='l')){
				word[i][j-1]='\0';
				break;
			}else if((word[i][j]=='g')&&(word[i][j-1]=='n')&&(word[i][j-2]=='i')){
				word[i][j-2]='\0';
				break;
			}
		}
		printf("%s\n",word[i]);
	}
	return 0;
	
}