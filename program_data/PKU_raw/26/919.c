int main(){
	char z[101];
	gets(z);
	int len,a;
	a=len=strlen(z);
    for (int i=1;i<a;){
		if(z[i]==' '&&z[i-1]==' '){
			for(int y=i;y<len-1;y++){
			  z[y]=z[y+1];
			}
			len--;
		}else {i++;}
	}
	z[len]='\0';
	printf("%s",z);
	return 0;
}    