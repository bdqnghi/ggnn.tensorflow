int main(){
	int i,m,j,n;
	char s[256];
	scanf("%d",&n);
	for(j=0;j<n;j++){
	    scanf("%s",s);
    	m=strlen(s);
    	for(i=0;i<m;i++){
			if(s[i]==65){
				s[i]=84;
				printf("%c",s[i]);
				continue;
			}
			if(s[i]==84){
				s[i]=65;
				printf("%c",s[i]);
				continue;
			}
			if(s[i]==67){
				s[i]=71;
				printf("%c",s[i]);
				continue;
			}
			if(s[i]==71){
				s[i]=67;
				printf("%c",s[i]);
				continue;
			}
		}
		printf("\n");
	}
    return 0;
}
