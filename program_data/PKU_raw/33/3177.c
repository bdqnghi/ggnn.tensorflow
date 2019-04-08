int main(){
	char str1[1000][256],str2[1000][256];
	int n,i,j;
	scanf("%d\n",&n);
	for(i=0;i<n;i++) gets(str1[i]);
	for(i=0;i<n;i++){
		for(j=0;str1[i][j]!='\0';j++){
			if(str1[i][j]=='A') str2[i][j]='T';
			else if(str1[i][ j]=='G') str2[i][j]='C';
			else if(str1[i][j]=='C') str2[i][j]='G';
			else if(str1[i][j]=='T') str2[i][j]='A';
		}
		str2[i][j]='\0';
		puts(str2[i]); 
	
	}
	return 0;
}
