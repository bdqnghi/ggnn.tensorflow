void change(char word[30][15], char a[], char b[]);
void getword(char *p,char word[30][15]);
int n=0;
void main()
{
	char s[100],word[30][15]={'\0'},a[10],b[10];
	char *p=s;
	gets(s);scanf("%s%s",a,b);
	getword(p,word);
	change(word,a,b);
}

void getword(char *p,char word[30][15])
{
	int i,j=0;
	for(i=0;*p!='\0';i++)
	{
		while(*p==' ')p+=1;
		j=0;
		while(*p!=' '&&*p!='\0')
		{
			word[i][j]=*p;
			j+=1;
			p+=1;
			
		}
		n+=1;
	}
}

void change(char word[30][15], char a[], char b[])
{
	int i;
	for(i=0;i<n;i++)
	{
		if(i>0)printf(" ");
		if(strcmp(word[i],a)==0)printf("%s",b);
		else printf("%s",word[i]);
	}
}