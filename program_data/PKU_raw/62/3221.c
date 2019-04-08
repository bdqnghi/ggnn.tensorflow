int main(){
    int i,j;
    char a[LEN+1],b[LEN+1]={0};
	gets(a);
	int l=strlen(a);
	for(i=1,j=1;i<l;i++){
		b[0]=a[0];
		if(a[i]==' '&&a[i-1]!=' '){
			b[j]=a[i];
			j++;
		}else if(a[i]!=' '){
			b[j]=a[i];
			j++;
		}
	}
	puts(b);
	return 0;
}

