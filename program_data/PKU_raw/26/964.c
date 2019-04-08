int main (){
	char a[100],b[100];
	gets(a);
	int c=strlen(a),d=0,i;
	for (i=0;i<c;i++){
		if (a[i]==' '&&a[i+1]==' '){
			d++;
			continue;
		}
		else{
			b[i-d]=a[i];
		}
	}
	b[i-d]='\0';
	puts(b);
	return 0;
}