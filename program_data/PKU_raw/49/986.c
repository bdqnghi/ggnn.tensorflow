
void sssss(char *);
int main(void)
{
	int d,t,n,i,j,k;
	char s[500],sub[500],rsub[500];
	int plen;
	gets(s);
	d=strlen(s);
	for(plen=2;plen<=d;plen++)
		{
			for(j=0;j<=d-plen;j++)
			{
				
				strncpy(sub,s+j,plen);
				sub[plen]='\0';
				strcpy(rsub,sub);
				sssss(rsub);
				rsub[plen]='\0';
				if(strcmp(sub,rsub)==0)
					printf("%s\n",sub);
			}
			
		}
				


return 0;}
void sssss(char *s)
{
	int d,i;
	char tmp;
	d=strlen(s);
	for(i=0;i<(d+1)/2;i++)
	{
		tmp=s[i];
		s[i]=s[d-1-i];
		s[d-1-i]=tmp;
	}
}