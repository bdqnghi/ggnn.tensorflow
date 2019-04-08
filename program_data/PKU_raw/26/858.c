int main(){
	char sz[101],c[101];
	int n,k,len,m;
	gets(sz);
	len=strlen(sz);
	c[0]=sz[0];
	n=1;
	for(k=1;k<len;k++){
			if(sz[k-1]==' '&&sz[k]==' '){
				c[n]=0;
			}else{
				c[n]=sz[k];
				n++;
			}
	}
	for(m=0;m<n;m++){
                printf("%c",c[m]);
}
	return 0;
}