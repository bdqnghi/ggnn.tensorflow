
int main() {
	char a[201];
	cin.getline(a,201);
	char *p=NULL;
	p=a;
	for(int i=0;i<=strlen(a);i++){
	if(*(p+i)==' '&&*(p+i+1)==' '){
		for(int j=i;j<=strlen(a)-1;j++)
			*(p+j)=*(p+j+1);
	     i--;
	}
	}
	for(int i=0;a[i]!='\0';i++)
	cout <<*(p+i);
	return 0;
}
