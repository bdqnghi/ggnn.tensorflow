
char yuan[100000],yao[110],wei[110];
int yuanlen,yaolen,weilen;

int main()
{
	char *s;
	int i,j;
	gets(yuan);
	gets(yao);
	gets(wei);
	s=strstr(yuan,yao);
	if(s==NULL||(s[-1]!=' '&&s!=yuan))
	{
		puts(yuan);
		return 0;
	}
	yuanlen=strlen(yuan);
	yaolen=strlen(yao);
	weilen=strlen(wei);
	while(s!=NULL)
	{
		if(yaolen==weilen)
		{
			for(i=0;i<yaolen;i++)
			{
				s[i]=wei[i];
			}
		}
		if(yaolen>weilen)
		{
			for(i=0;i<weilen;i++)
				s[i]=wei[i];
			while(s[i+yaolen-weilen]!=0)
			{
				s[i]=s[i+yaolen-weilen];
				i++;
			}
			s[i]=0;
		}
		if(yaolen<weilen)
		{
			for(i=yuanlen-1;i>yaolen-1;i--)
				s[i+weilen-yaolen]=s[i];
			for(i=0;i<weilen;i++)
				s[i]=wei[i];
		}
		s+=weilen;
		s=strstr(s,yao);
	}


	puts(yuan);
	return 0;

}