int main()
{
	char s[50],w[50];
	int i,j,len,flag=0;
	scanf("%s %s",s,w);
	len=strlen(s);
	for(i=1;w[i]!='\0';i++)if(s[0]==w[i])
	{
		for(j=1;j<len;j++)if(s[j]!=w[i+j])goto label;
		printf("%d",i);break;
		label:;
	}
	return 0;
}