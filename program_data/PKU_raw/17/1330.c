int DO(char *SPE,int length)
{
	int k1=0;
	char *p1=NULL,*p2=NULL;
	for(int i=0;i<length;i++)
	{
		if(SPE[i]=='$')
		{
			k1++;
			p1=SPE+i;
		}
		else if(SPE[i]=='?')
		{
			p2=SPE+i;
			if(k1!=0)
			{
				*p1=' ';*p2=' ';return DO(SPE,length);
			}
		}
	}
	return 0; 
}
int main(void)
{
	char SPE[101];
	while(~scanf("%s",SPE))
	{
		puts(SPE);
		int length=strlen(SPE);
		for(int i=0;i<length;i++)
		{
			if(SPE[i]!='('&&SPE[i]!=')') SPE[i]=' ';
			else if(SPE[i]=='(') SPE[i]='$';
			else if(SPE[i]==')') SPE[i]='?';
		}
		DO(SPE,length);
		puts(SPE);
	}
	return 0;
} 