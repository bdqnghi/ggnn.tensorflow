int main(){
	int n;
	scanf("%d",&n);
	int i;
	char **oldjianji=(char**)malloc(sizeof(char*)*n);
	for(i=0;i<n;i++){
		oldjianji[i]=(char*)malloc(sizeof(char)*256);
	}	
	int j;
	int *len=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%s",oldjianji[i]);
		len[i]=strlen(oldjianji[i]);
	}
	char **jianji=(char**)malloc(sizeof(char*)*n);
	for(i=0;i<n;i++){
		jianji[i]=(char*)malloc(sizeof(char)*len[i]+1);
	}

	for(i=0;i<n;i++){
		for(j=0;j<len[i];j++){
			if(oldjianji[i][j]=='A'){
				jianji[i][j]='T';
			}else if(oldjianji[i][j]=='T'){
				jianji[i][j]='A';	
			}else if(oldjianji[i][j]=='C'){
				jianji[i][j]='G';
			}else if(oldjianji[i][j]=='G'){
				jianji[i][j]='C';
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",jianji[i]);
	}
free(jianji);
free(oldjianji);
free(len);
return 0;
}