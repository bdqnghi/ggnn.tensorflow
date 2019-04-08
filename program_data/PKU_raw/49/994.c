char *reverse(char *pt);
int main()
{
	char source[501];
	char sub[501];
	char term[501];
	int len;
	int sublen;
	char *p=source;
	gets(source);
	len=strlen(source);
	for(sublen=2;sublen<=len;sublen++)
	{
		for(p=source;p<source+len-sublen+1;p++)
		{
			strncpy(sub,p,sublen);
			sub[sublen]='\0';
			strcpy(term,sub);
			if(strcmp(sub,reverse(term))==0)
				printf("%s\n", sub);
		}
	}
	return 0;
}
char *reverse(char *pt)
{
	char term[501];
	int i;
	strcpy(term,pt);
	for(i=0;i<strlen(pt);i++)
		pt[i]=term[strlen(pt)-i-1];
	return pt;
}