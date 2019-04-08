int main(){
	char h[w][w];
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		gets(h[i]);
	}
	for(i=1;i<=n;i++){
		j=strlen(h[i]);
		if(h[i][j-2]=='e'&&h[i][j-1]=='r')
			h[i][j-2]='\0';
		if(h[i][j-2]=='l'&&h[i][j-1]=='y')
			h[i][j-2]='\0';
		if(h[i][j-3]=='i'&&h[i][j-2]=='n'&&h[i][j-1]=='g')
			h[i][j-3]='\0';

	}
	for(i=1;i<=n;i++){
		puts(h[i]);
	}
	return 0;
}
