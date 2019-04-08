
int main()
{
	char str[101];
	int n,i,j,l,k=0;
	char c[101];
	cin >> n;
	for(i=1;i<=n;i++)
	{
		int left=0,right=0;
		int e[101]={0};
		cin >> str;
		l=strlen(str);
		for(j=0;j<l;j++)
		{
			if(str[j]=='(')
			{
				left++;
				e[j]=1;
				c[left]=j;
			}
			if(str[j]==')')
			{
				if(left==0)
				{
					e[j]=2;
				}
				else
				{
					e[c[left]]=0;
					left--;
				}
			}
			else
				continue;
		}
		cout << str << endl;
		for(j=0;j<l;j++)
		{
			if(e[j]==1)
				cout << "$";
			else if(e[j]==2)
				cout << "?" ;
			else
				cout << " " ;
		}
		cout << endl;
	}
	return 0;
}