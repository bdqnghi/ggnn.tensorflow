int main(){
	char a[100];
	int n,i;
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(i==0)printf("%c",a[i]);
		else if(a[i-1]==' '&&a[i]!=' ')
			printf(" %c",a[i]);
		else if(a[i]!=' ')printf("%c",a[i]);
	}
	
	return 0;
}
