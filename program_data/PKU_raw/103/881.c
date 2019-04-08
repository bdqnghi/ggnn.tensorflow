
int main()
{
	char ch[1001];
	int count=1,i,j;
	cin>>ch;
	for(int i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='a'&&ch[i]<='z')
			ch[i]-=32;
	}
	for(j=0,i=0;;)
	{
		if(ch[j]=='\0')
		{
			cout<<"("<<ch[i]<<","<<count<<")";break;
		}
		else
		{
			for(j=i+1;ch[j]!='\0';j++)
			{
				if(ch[j]==ch[i])
				{
					count++;
				}
				else
				{
					cout<<"("<<ch[i]<<","<<count<<")";
					count=1;i=j;break;
				}
			}
		}
	}
	return 0;
}