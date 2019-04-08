int main(){
	char words[N][len];
	int n,i,l;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",words[i]);
		l=strlen(words[i]);
		if(words[i][l-1]=='r'||words[i][l-1]=='y'){
			words[i][l-2]=0;
			printf("%s\n",words[i]);
		}else{
			words[i][l-3]=0;
			printf("%s\n",words[i]);
		}
	}
	return 0;
}