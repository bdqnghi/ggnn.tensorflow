
int main (){
	char x[100];
	char y[100];
	int i,k,t;
	gets(x);
	k=0;
	t=strlen(x);
	for(i=0;i<t;i++){
		if(x[i]!=' '){
			y[k]=x[i];
			k=k+1;
		}
		if(x[i]==' '&&x[i+1]!=' '){
			y[k]=x[i];
			k=k+1;
		}
	}
	y[k]='\0';
	puts(y);
	return 0;
}
