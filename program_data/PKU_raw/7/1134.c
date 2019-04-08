
int strnl(char *,char *);
void replace(char *str,int len_ss,int start,char *rpl);

int main()
{
	char str[256],substr[256],rpl[256];
	int start;
	scanf("%s %s %s",str,substr,rpl);
	start=strstr(str,substr);
	if(start)
		replace(str,strlen(substr),(char *)start-str,rpl);
          else
               printf("%s\n",str);
	return 0;
}

int isstart(int i,char *s,char *subs)
{
	char temp[256];
	char *p,*pt;
	p=s+i;
	pt=temp;
	int j;
	for(j=0;j<strlen(subs);j++)
		*pt++=*p++;
	*pt=0;
	if(!strcmp(temp,subs))
		return 1;
	return 0;
}

int strnl(char *s,char *subs)
{
	int i;
	for(i=0;i<=strlen(s)-strlen(subs);i++)
		if(isstart(i,s,subs))
			return i;
	return -1;
}

void replace(char *str,int len_ss,int start,char *rpl)
{
	char temp[256];
	strcpy(temp,str);
	char *ptmp,*prpl;
	ptmp=temp+start;
	prpl=rpl;
	while(*prpl)
		*ptmp++=*prpl++;
	char *pstr=str+start+len_ss;
	while(*pstr)
		*ptmp++=*pstr++;
	*ptmp=0;
         strcpy(str,temp);
	printf("%s\n",temp);
}
