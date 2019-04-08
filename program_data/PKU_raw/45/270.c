void main()
{
	char str[2*N]="\0",s[N]="\0",w[N]="\0",t[N]="\0";
	int i=0,j,m,ls,lw;
	gets(str);
	for(j=0;str[j]!=' ';j++)s[j]=str[j];
	for(m=j+1;str[m];m++)w[m-j-1]=str[m];
	ls=strlen(s);
	lw=strlen(w);
	for(i=0;i<=(lw-ls);i++)
	{
		if(s[0]==w[i])
		{
			for(j=0;j<ls;j++)t[j]=w[i+j];
			if(strcmp(s,t)==0){printf("%d\n",i);break;}
		}
	}
}