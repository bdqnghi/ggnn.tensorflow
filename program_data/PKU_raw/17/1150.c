void Match(int input_len);
char input[128];
char tmp_input[128];
int main()
{
	//freopen("test.txt","r",stdin);
	while(scanf("%s",input)!=EOF)
	{
		strcpy(tmp_input,input);
		int input_len=strlen(input);
		Match(input_len);
		for(int i=0;i<=input_len-1;i++)
		{
			if(input[i]=='(')
			{
				input[i]='$';
			}
			else if(input[i]==')')
			{
				input[i]='?';
			}
			else
			{
				input[i]=' ';
			}
		}
		printf("%s\n",tmp_input);
		printf("%s\n",input);
	}
	return 0;
}
void Match(int input_len)
{
	int cur_left=-1,cur_right=-1;
	for(int i=0;i<=input_len-1;i++)
	{
		if(input[i]=='(')
		{
			cur_left=i;
			continue;
		}
		if(input[i]==')')
		{
			if(cur_left!=-1)
			{
				input[cur_left]=' ';
				input[i]=' ';
				cur_left=-1;
				i=-1;
				continue;
			}
		}
	}
}