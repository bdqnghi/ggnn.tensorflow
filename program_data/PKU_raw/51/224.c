int main()
{
	char s[500],w[500][5]={0};int n,i,j,l,max=-1,no[500]={0};
	scanf("%d\n",&n);
	gets(s);l=strlen(s);
	for(i=0;i<l-n+1;i++)
		for(j=0;j<n;j++)
		w[i][j]=s[i+j];
	for(i=0;i<l-n;i++)
		for(j=i+1;j<l-n+1;j++)
			if(strcmp(w[i],w[j])==0) {no[i]++;if(no[i]>max) max=no[i];}
			if(max==-1) printf("NO");else{printf("%d\n",max+1);	
			for(i=0;i<l-n+1;i++) if(no[i]==max) printf("%s\n",w[i]);}
	return 0;
}
