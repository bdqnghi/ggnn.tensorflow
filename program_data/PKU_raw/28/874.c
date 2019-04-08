int main()
{
	char str[60000];
	char zfc[300][20];
	int sz[300];
	int i=0,h=0,k=0;
	gets(str);
	for(i=0;i<300;i++){
		sz[i]=0;
	}
	for(i=0;i<strlen(str)+1;i++){
		if(str[i]==' '&&str[i-1]==' '){
			continue;
		}
		else if(str[i]==' '&&str[i-1]!=' '){
			zfc[h][k]='\0';
			h++;
			k=0;
		}
		else if(str[i]=='\0'){
			zfc[h][k]='\0';
		}
		else{
			zfc[h][k]=str[i];
			k++;
		}
	}
	 for(i=0;i<h+1;i++){
		sz[i]=strlen(zfc[i]);
	}
	 for(i=0;i<h;i++){
		 printf("%d,",sz[i]);
	 }
	 printf("%d",sz[h]);
	return 0;
}


