int main(){
	int i,j,n,m;
	char s[33];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&s);
		m=strlen(s);
		if(s[m-1]=='g'){
			s[m-3]='\0';
			printf("%s\n",s);
		}else if(s[m-1]=='y'){
			s[m-2]='\0';
			printf("%s\n",s);
		}else if(s[m-1]=='r'){
			s[m-2]='\0';	
			printf("%s\n",s);
		}
	}
	return 0;
}