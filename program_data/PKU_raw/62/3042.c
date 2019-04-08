int main(){
	char s[1000];
	int i,j,k,t,l,f=0; 
	gets(s);
	l=strlen(s);
	for(i=0;i<l-1;i++){
		if(s[i]==' '&&s[i+1]==' '&&f==0){
			j=i;
			f=1;
		}
		else if(s[i]==' '&&s[i+1]!=' '&&f==1){
			k=i; 
			for(t=j;t<l-k+j;t++){
				s[t]=s[i];
				i++;
			}
			s[t]='\0';
			f=0;
			i=j;
		}
	}
	printf("%s",s); 
	return 0;
}