int main()
{
	int i,k=0,n,p=1;
	char a[101],b[101];
	gets(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]!=' '){
			b[k]=a[i];
			k++;
			p=1;
		}else if(p!=0){
			b[k]=' ';
			k++;
			p=0;
		}
	}
	b[k]=0;
	printf("%s",b);
	return 0;
}