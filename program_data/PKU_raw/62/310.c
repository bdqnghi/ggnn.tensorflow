int main(){
	int i,j,c,l;
	char a[201];
	gets(a);
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]==' '&&a[i+1]==' '){
			for(j=i+2;j<l;j++){
				if(a[j]!=' '){
					break;
				}
			}
			for(c=0;c<l;c++){
				a[i+1+c]=a[j+c];
			}
		}
	}
	puts(a);
	return 0;
}
