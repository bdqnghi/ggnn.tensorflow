int main()
{
	int i,j,n,len,e=0;
	char word[NMAX][AMAX];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",word[i]);
	}
	i=0;
	while(i<n){
		len=strlen(word[i]);
		for(;len<=80&&i<n;i++){
			len+=strlen(word[i+1])+1;
		}
		printf("%s",word[e]);
		for(j=e+1;j<i;j++)
			printf(" %s",word[j]);
		e=i;
		printf("\n");

	}

}

