int main(){
	int n,len;
	char zf[1000][1000];
	scanf("%d",&n);
	int i,j;
	for (i=0;i<n;i++){
		scanf("%s",zf[i]);
		j=0;
		len=strlen(zf[i]);
		for (j=0;j<len;j++){
			switch(zf[i][j]){
			case 'A':
				zf[i][j]='T';
				break;
			case 'T':
				zf[i][j]='A';
				break;
			case 'C':
				zf[i][j]='G';
				break;
			case 'G':
				zf[i][j]='C';
				break;
			}
		}
		printf("%s\n",zf[i]);
	}
	return 0;
}