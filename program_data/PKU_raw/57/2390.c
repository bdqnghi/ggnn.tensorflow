int main(int argc, char* argv[])
{
	int n,i,a;
	char word[20];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",word);
		a=strlen(word);
		if(word[a-1]=='r')
		{
			word[a-1]='\0';
				word[a-2]='\0';
		}
		if(word[a-1]=='y')
		{
			word[a-1]='\0';
				word[a-2]='\0';
		}
		if(word[a-1]=='g')
		{
			word[a-1]='\0';
				word[a-2]='\0';
				word[a-3]='\0';
		}
     printf("%s\n",word);
	}

	return 0;
}
