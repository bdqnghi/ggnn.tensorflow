int main(){
	int i,j=0,n;
	char a[101],b[101];
	gets(a);
	for(i=0;a[i];i++){
		if((a[i]!=' ')||((a[i]==' ')&&(a[i+1]!=' '))){
			b[i-j]=a[i];
		}else{
			j++;
		}
	}
	n=strlen(a);
	b[n-j]='\0';
	printf("%s",b);
	return 0;
}
