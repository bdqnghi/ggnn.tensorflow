char change(char s)
{
	if(s>='A'&&s<='Z')
		s=s-'A'+'a';
	return s;
}

int main()
{
	char c[2][80];
	int i,j;
	for(j=0;j<2;j++)
		gets(c[j]);
	for(j=0;j<2;j++)
	for(i=0;c[j][i]!='\0';i++)
	{
		c[j][i]=change(c[j][i]);
	}
	if(strcmp(c[0],c[1])>0) printf(">");
	else if(strcmp(c[0],c[1])<0) printf("<");
	else printf("=");
}