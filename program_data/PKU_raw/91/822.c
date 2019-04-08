int main(){
	int i,j;
	char a[101];
	gets(a);
	for (i=0;i<strlen(a)-1;i++)
		printf("%c",*(a+i)+*(a+i+1));
	printf("%c",*a+*(a+strlen(a)-1));
}