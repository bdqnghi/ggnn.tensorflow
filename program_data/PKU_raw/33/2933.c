void match(char a);
int main()
{
	int n,i,j,len;
	char c[256];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	scanf("%s",&c);
	len=strlen(c);
	for(j=0;j<len;j++){
	match(c[j]);
	}
	printf("\n");
	}
	return 0;
}
void match(char a){
	if(a=='A')
		printf("T");
	if(a=='T')
		printf("A");
	if(a=='C')
		printf("G");
	if(a=='G')
		printf("C");
}
