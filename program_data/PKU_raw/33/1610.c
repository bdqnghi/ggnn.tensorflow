int main (){
	int n,i,j;
	char s[MAX+1];
	scanf ("%d",&n);
	for (i=0;i<=n;i++){
		gets(s);
		for(j=0;s[j];j++){
			switch (s[j]){
			case'A':s[j]='T';break;
			case'T':s[j]='A';break;
			case'C':s[j]='G';break;
			case'G':s[j]='C';break;
			}
		}
		puts(s);
	}
	return 0;
	
}
