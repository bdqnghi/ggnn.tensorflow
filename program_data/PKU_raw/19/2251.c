int main()
{
	char zfc[100],zsz[100][100];
	char word_a[100],word_b[100];
	
	gets(zfc);
	scanf("%s\n%s",word_a,word_b);
	
	int word_i = 0, word_j = 0;
	int i,n;
	n=strlen(zfc);
	for(i=0;i<n;i++){
		if (zfc[i] == ' ' || zfc[i] == ',') {
			
			zsz[word_i][word_j] = '\0';
			word_i++;
			word_j = 0;

		} else {
			zsz[word_i][word_j] = zfc[i];
			word_j++;

			if (i == n-1) {
				zsz[word_i][word_j] = '\0';
				word_i++;
			}
		}
	}
    int j,a[10],m=0,k;
	for(j=0;j<i;j++){
		if(strcmp(zsz[j],word_a)==0){
			a[m]=j;
			m++;
			}
	}
	for(k=0;k<m;k++){
		strcpy(zsz[a[k]],word_b);
	}
	for(j=0;j<word_i;j++){
		if(j!=word_i-1){
			printf("%s ",zsz[j]);
		}
		else
			printf("%s",zsz[j]);
	}
	
    return 0;
}