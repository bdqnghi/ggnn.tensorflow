
int main()
{
	char ch[11000],target[1000],replace[1000];
	cin.getline(ch,10000);
	cin.getline(target,110);
	cin.getline(replace,110);
	int c=strlen(ch);
	int t=strlen(target);
	ch[c]=' ';
	for(int i=0;i<c;i++)
	{
		if(ch[i]!=target[0])//??????????
			cout<<ch[i];
		else if(i==0&&ch[i]==target[0]&&ch[t]!=' ')//????????????????????????
			cout<<ch[i];
		else if (i>0&&(ch[i-1]!=' '||ch[i+t]!=' '))//???????????????
			cout<<ch[i];
		else//?????????????????
			{
				int count=0;
				for(int j=0;j<t;j++)
				{
					if(ch[i+j]==target[j])
						count++;
					else
						break;
				}
				if(count==t)
				{
					cout<<replace;
					i=i+t-1;
				}
				else
				{
					cout<<ch[i];
				}
			}
	}
	return 0;
 }
