int main(){
	int n,a;
	char s[50][50];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",s[i]);
		a=strlen(s[i]);
		if((s[i][a-1]=='r'&&s[i][a-2]=='e')||(s[i][a-1]=='y'&&s[i][a-2]=='l')){
			s[i][a-2]='\0';
		}else{
			s[i][a-3]='\0';
		}
		puts(s[i]);
	}
	return 0;
}