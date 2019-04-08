void main(){
	int n,i,j;
	char w[20];
	char w1[100][20];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",w);
		if(w[strlen(w)-1]=='r'){
			for(j=0;j<strlen(w)-2;j++)
				w1[i][j]=w[j];
			w1[i][j] = '\0';
		}
		if(w[strlen(w)-1]=='y'){
			for(j=0;j<strlen(w)-2;j++)
				w1[i][j]=w[j];
			w1[i][j] = '\0';
		}
		if(w[strlen(w)-1]=='g'){
			for(j=0;j<strlen(w)-3;j++)
				w1[i][j]=w[j];
			w1[i][j] = '\0';
		}
	}
	for(i=0;i<n;i++)
		puts(w1[i]);
}
