int main()
{
	char number[110]={0};
	cin>>number;
	char shang[110]={0};
	int yushu=0;
	if(strlen(number)>=2)//????????
	{
	for(int i=0;i<strlen(number)-1;i++)//??????
	{
		int a=(number[i]-'0')*10+(number[i+1]-'0');
		shang[i]=a/13+'0';
		number[i+1]=a%13+'0';
	}
	yushu=number[strlen(number)-1]-'0';
	}
	else
	{
		shang[0]='0';
		yushu=number[strlen(number)-1]-'0';
	}
	if(shang[0]!='0'||shang[1]==0)//??
	{
		cout<<shang<<endl;
	}
	else
	{
		for(int i=1;i<strlen(shang);i++)
		{
			cout<<shang[i];
		}
		cout<<endl;
	}
	cout<<yushu;//??

	return 0;
}