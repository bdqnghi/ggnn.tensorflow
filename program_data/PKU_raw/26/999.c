int main(){
	char a[MAX],b[MAX];
	int i,len,j;
	gets(a);
    len=strlen(a);
	for(i=0,j=0;i<len;i++){
		if(a[i]=='\0'){
			break;
		}
		if(a[i]==' '&&a[i+1]==' '){
			continue;
		}
		b[j]=a[i];
		j++;
	}
	b[j]='\0';
	puts(b);
	return 0;
}