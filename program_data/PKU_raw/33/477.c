int main(){
	char a[100],b[300],c[300];
	gets(a);
	int n=atoi(a),i,k;
	int s;
	for(i=0;i<n;i++){
		gets(b);
		s=strlen(b);
		for(k=0;b[k]!='\0';k++){
			switch (b[k]){
			case 'A':c[k]='T';break;
			case 'T':c[k]='A';break;
			case 'C':c[k]='G';break;
			case 'G':c[k]='C';break;
			}
		}
		c[s]='\0';
		puts(c);
	}
	


	return 0;
}

