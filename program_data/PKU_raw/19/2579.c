int main()
{
	char word[5000],w[1000][1000],w1[1000],w2[1000];
	gets(word);
	gets(w1);
	gets(w2);
	int n,i,j=0,k=0,A;
	n=strlen(word);
	for(i=0;i<n;i++){
		if(word[i]!=' ')
		{
		 w[k][j]=word[i];
		 j++;
		 A=1;
		}
		if(word[i]==' '&&A==1){
            w[k][j]='\0';
			j=0;
			k++;
			A=0;
		}
	}
	for(i=0;i<=k;i++){
		if(strcmp(w1,w[i])==0)
		strcpy(w[i],w2);
	}
	for(i=0;i<k;i++){
		printf("%s ",w[i]);
	}printf("%s",w[i]);
	return 0;
}