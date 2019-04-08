int main(){
	char sd[4000];
	gets(sd);
	int i, a=0, b=0, sum=1, k;
	char s[200][30], e[30];
	for(i=0;sd[i]!='\0';i++){
		if(sd[i]==' '||sd[i]==','){
			s[a][b]='\0';
			a++;
			b=0;
			sum++;
		}
		else{
			s[a][b]=sd[i];
			b++;
		}
	}
	s[a][b]='\0';
	for(k=1;k<=sum;k++){
		for(i=0;i<sum-k;i++){
			if(strlen(s[i])<strlen(s[i+1])){
				strcpy(e,s[i+1]);
				strcpy(s[i+1],s[i]);
				strcpy(s[i],e);
			}
		}
	}
	printf("%s\n", s[0]);
	for(k=1;k<=sum;k++){
		for(i=0;i<sum-k;i++){
			if(strlen(s[i])>strlen(s[i+1])){
				strcpy(e,s[i+1]);
				strcpy(s[i+1],s[i]);
				strcpy(s[i],e);
			}
		}
	}
	for(i=0;i<sum;i++){
		if(strlen(s[i])!=0){
			strcpy(s[0],s[i]);
			break;
		}
	}
	printf("%s", s[0]);
	return 0;
}
