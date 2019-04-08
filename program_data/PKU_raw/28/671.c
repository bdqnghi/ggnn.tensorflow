int main()
{
	int sz[600];
	char  zfc[600],words[300][100];
    gets(zfc);
	int i,n=0,k=0;
	for(i=0;zfc[i]!=0;i++){
		if(zfc[i]==' '){
		    zfc[i]='\0';
            strcpy(words[n],(zfc+k));
			n++;
			k=i+1;
		}
	}
	strcpy(words[n],(zfc+k));
	n++;
	for(i=0;i<n;i++){
		sz[i]=strlen(words[i]);
	}
	printf("%d",sz[0]);
	for(i=1;i<n;i++){
		if(sz[i]!=0){
			printf(",%d",sz[i]);
		}
	}
	return 0;
}