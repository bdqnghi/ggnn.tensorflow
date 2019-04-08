int main(){
	char dc[51][32];
	int n,i,j,p[100];
	scanf("%d",&n);	
	for(i=0;i<n;i++){
		scanf("%s",dc[i]);
	}
	for(i=0;i<n;i++){
	    j=strlen(dc[i]);
			if (dc[i][j-1]=='g'){
				if(dc[i][j-2]=='n'){
					if(dc[i][j-3]=='i'){
				      p[i]=1;
					}
				}
			}else if (dc[i][j-1]=='r'){
			         if(dc[i][j-2]=='e'){
			          p[i]=2;
			     }
			}else if (dc[i][j-1]=='y'){
			           if(dc[i][j-2]=='l'){
			              p[i]=3;
			           }
			}else{
			    p[i]=4;
			}
	}
	for(i=0;i<n;i++){
		if(p[i]==1){
			for(j=0;j<strlen(dc[i])-3;j++){
				printf("%c",dc[i][j]);
			}
			printf("\n");
			}else if(p[i]==2||p[i]==3){
			for(j=0;j<strlen(dc[i])-2;j++){
				printf("%c",dc[i][j]);
			}
			printf("\n");
			}else if(p[i]==4){
			for(j=0;j<strlen(dc[i]);j++){
				printf("%c",dc[i][j]);
			}
			printf("\n");
			}
		}
	return 0;
}