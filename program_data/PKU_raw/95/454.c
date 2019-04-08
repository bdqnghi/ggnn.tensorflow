
int main()
{
	void largen(char s[]);
	int flag;
	char s1[80],s2[80];
	gets(s1);
	gets(s2);
	largen(s1);
	largen(s2);
	flag=strcmp(s1,s2);
	if(flag>0)
		printf(">\n");
	else if(flag<0)
		printf("<\n");
	else printf("=\n");
	return 0;
}

void largen(char s[])
{
	int i;
	for(i=0;;i++){
		if(s[i]>='a'&&s[i]<='z')
			s[i]-=32;
		else if(s[i]=='\0')
			break;
	}
}