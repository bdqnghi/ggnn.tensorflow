int main(){
	char a[111],b[111];
	char *ap=a,*bp=b;
	gets(a);
	for(unsigned int i=0;i<=strlen(a)-2;i++){
		*(bp+i)=*(ap+i)+*(ap+i+1);
	}
	*(bp+strlen(a)-1)=*(ap+strlen(a)-1)+*(ap);
	*(bp+strlen(a))='\0';
	cout<<b;
	return 0;
}
