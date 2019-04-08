int main(){
	char s[10000];
	gets(s);
	int i,n,m=0,n1=0,n2=0;
	for(i=0;s[i]!=' ' && s[i]!='\0';i++){
		m=i+1;
	}
	printf("%d",m);
	for(i=m;s[i]!='\0';i++){
		if(s[i]==' '&&s[i+1]!=' '){
			n1=i;
		}
		if(s[i]!=' '&&s[i+1]==' '){
			n2=i;
			n=n2-n1;
		printf(",%d",n);
		}
		
		
	}
	if(strlen(s)!=m) printf(",%d",strlen(s)-n1-1);
	return 0;
}
