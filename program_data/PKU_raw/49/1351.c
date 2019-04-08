int main()
{
	char str[505];
	cin >> str;
	int len=strlen(str);
	int l,s;
	for(l=2;l<=len;l++)
	{
		for(s=0;s<=len-l;s++)
		{
			int flag=1;
			for(int p=s,q=s+l-1;p<q;p++,q--)
			{
				if(str[p]!=str[q])
				{
					flag=0;
					break;
				}
			}
			if(flag)
			{
				for(int k=s;k<=s+l-1;k++)
					cout<<str[k];
					cout<<endl;
			}
		}
	}
	return 0;
}