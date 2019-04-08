// 2011???.cpp : ??????????????
//
int main()
{
	char str[10000];
	char now;
	int len;
	cin>>str;
	len=strlen(str);
	int num=1;
	int time=0;
	for(int j=0;j<len;j++)
	{
		if(str[j]<'z'+1&&str[j]>'a'-1) str[j]=str[j]+'A'-'a';
	}
	now=str[0];
	cout<<'('<<now<<',';
	for(int i=1;i<len;i++)
	{
		if(str[i]==str[i-1]) num=num+1;
		else
		{
			cout<<num<<')';
			now=str[i];
			num=1;
			cout<<'('<<now<<',';
		}
	}
	cout<<num<<')'<<endl;
	return 0;
}