int main()
{
	int i,m,n;
	char s[33];
	scanf("%d",&m);
	for(i=0;i<m;i++){
	scanf("%s",s);
    n=strlen(s)-1;
	if(s[n]=='g'){
		s[n-2]=0;
		s[n-1]=0;
		s[n]=0;
	}
	else
		s[n-1]=s[n]=0;
	printf("%s\n",s);
	}
	return 0;
}