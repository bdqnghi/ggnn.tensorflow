int main()
{
	char s[1000]={0};
	gets(s);
	char g[5000][50];
	int i,j,k,a,n=strlen(s);	
	k=0;
	a=0;
	for(i=0;k<n;i++){
		for(j=0;k<n;j++){
			if(s[k]!=' ')
				g[i][j]=s[k];
			if(s[k]==' '){
			    g[i][j]=0;
				k++;
				break;
			}
			k++;
		}
		if(k>=n)
			g[i][j]=0;
	}
	a=i;
	 int sz[1000];
	 for (i=0;i<a;i++){
		 sz[i]=strlen(g[i]);
	 }
	 for(i=0;i<a-1;i++){
		 if(sz[i]!=0)
		 printf("%d,",sz[i]);
	 }
	 printf("%d",sz[a-1]);
	 return 0;
}




