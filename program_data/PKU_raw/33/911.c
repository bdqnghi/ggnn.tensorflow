int main(){
	int n,i,j;
	char s[256];
	char A,G,C,T;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s);
		for(j=0;s[j];j++){
			switch(s[j]){
				case'A':
					s[j]='T';
					break;
				case'G':
					s[j]='C';
					break;
				case'C':
					s[j]='G';
					break;
				case'T':
					s[j]='A';
					break;
			}
		}
		printf("%s\n",s);
	}
	return 0;
}