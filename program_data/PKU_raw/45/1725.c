int main(){
	char sw[101];
	gets(sw);
	int lsw=strlen(sw);

	char s[51];
	char w[51];

	int i;
	for(i=0;i<lsw;i++){
		if(sw[i]!=' '){
			s[i]=sw[i];
		}else{
			s[i]='\0';
			i++;
			break;
		}
	}
	int i0=i;
	while(i<lsw){
		w[i-i0]=sw[i];
		i++;
	}
	w[i-i0]='\0';

	int lw=strlen(w);
	int ls=strlen(s);

	int t=0;
	
	char e[51];
	while(t<lw){
		if(w[t]!=s[0]){
		e[t]=w[t];
		t++;
		}else{
			e[t]='\0';
			break;
		}
	}
	printf("%d",strlen(e));
	return 0;
}