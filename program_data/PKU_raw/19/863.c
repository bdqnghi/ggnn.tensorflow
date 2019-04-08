int main()
{
	char s[101],sz[51][101],a[101],b[101];
	int i,j,k,n;
	int  max=0,min=0;
	gets(s);
	n=strlen(s);
	for(i=0,k=0;i<n;i++){
		for(j=0;s[i]!=' '&&i<n;i++,j++){
			sz[k][j]=s[i];
		}
		sz[k][j]='\0';
		k++;
	}
	gets(a);
	gets(b);
	
	for(i=0;i<k-1;i++){
		if(strcmp(sz[i],a)==0){
			printf("%s",b);
		}
		else{
			printf("%s",sz[i]);
		}
		printf(" ");
	}
	if(strcmp(sz[k-1],a)==0){
		printf("%s\n",b);
	}
	else{
		printf("%s\n",sz[k-1]);
	}

	return 0;
}
