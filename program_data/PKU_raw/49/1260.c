void judge(int start,int l);
char str[505];
int main()
{
	cin>>str;
	int l=strlen(str);
	for(int i=2;i<=l;i++)
	{
		for(int j=0;j<=l-i;j++)
		{
			judge(j,i);
		}
	}
	return 0;
}
void judge(int start,int l)
{
	int flag=1;
	for(int i=0;i<l/2;i++)
	{
		if(str[start+i]!=str[start+l-1-i])
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		for(int i=start;i<start+l;i++)
		{
			cout<<str[i];
		}
		cout<<endl;
	}
}
