int main(){
char s[1000][260];
	int n,i,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",s[i]);
	}
	for(i=0;i<n;i++){
		for(k=0;k<255;k++){
			switch(s[i][k]){
			case 'A':
				s[i][k]='T';
				break;
			case 'T':
				s[i][k]='A';
				break;
			case 'C':
				s[i][k]='G';
				break;
			case 'G':
				s[i][k]='C';
				break;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",s[i]);
	}
	return 0;
}