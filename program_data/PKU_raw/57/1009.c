int main(){
	int n;
	char s[33];
	int c,i,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		c=strlen(s);
		if((s[c-2]=='e'&&s[c-1]=='r')||(s[c-2]=='l'&&s[c-1]=='y')){
			s[c-2]='\0';
		}else{
			s[c-3]='\0';
		}
		printf("%s\n",s);
	}
	return 0;
}