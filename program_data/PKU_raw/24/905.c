int main()
{
	char sen[5000],sz[50][100];
	int i,j,k,n;
	int  max=0,min=0;
	gets(sen);
	n=strlen(sen);
	for(i=0,k=0;i<n;i++){
		for(j=0;sen[i]!=' '&&i<n;i++,j++){
			sz[k][j]=sen[i];
		}
		sz[k][j]='\0';
		k++;
	}
	
	for(i=0;i<k;i++){
		if(strlen(sz[i])>strlen(sz[max])){
			max=i;
		}
		if(strlen(sz[i])<strlen(sz[min])){
			min=i;
		}
	}
	printf("%s\n%s\n",sz[max],sz[min]);
	return 0;
}