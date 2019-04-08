char swap(char x){
	char y;
	if(x=='A')
		y='T';
	if(x=='T')
		y='A';
	if(x=='G')
		y='C';
	if(x=='C')
		y='G';
	return y;
}
int main(){
	int n,i,j,len;
	char str[50000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",str);
		len=strlen(str);
		for(j=0;j<len;j++){
			str[j]=swap(str[j]);
		}
		printf("%s\n",str);
	}
	return 0;
}
