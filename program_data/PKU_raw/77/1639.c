int flag[101]={0};
char str[101];
char b,g;
void match(int girl)              //int girl's pos
{
	int j;
	for(j=girl;j>=0;j--)
	{
		if(str[j]==b&&flag[j]==0)
		{
			cout<<j<<' '<<girl<<endl;
			flag[j]=1;
			break;
		}
	}
	return ;
}

int main()
{
	int i=0;
	cin >> str;
	b=str[0];
	int len=strlen(str);
	while(str[i]==b)i++;
	g=str[i];
	for(;i<=len-1;i++)
	{
		if(str[i]==g)match(i);
	}
	return 0;
}
	

