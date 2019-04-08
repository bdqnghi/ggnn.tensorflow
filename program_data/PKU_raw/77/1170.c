void p(int a[])//??
{
	int i=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==1)
		{
			int j=i+1;
			while(a[j]==3) j++;//?????????????
			if(a[j]==2)
			{
				cout<<i<<' '<<j<<endl;
				a[i]=3;a[j]=3;//??????
				p(a);//???
			}
		}
	}
}
int main()
{
	char a;
	int child[200]={0};
	int i=1;
	child[0]=1;
	cin>>a;
	while(cin.peek()!='\n')//?????????1???2???0????3????
	{
		char ch=cin.get();
		if(ch==a)
			child[i]=1;
		else child[i]=2;
		i++;
	}
	p(child);
	return 0;
}