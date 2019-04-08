int main()
{
	char str[110]={0};
	int i=0;
	while(true)
	{
		str[i]=getchar();
		if(str[i]=='\n')
			break;
		i++;
	}
	int n,j=0;
	n=i-1;
	for(i=0;i<=n;i++)
	{
		if(str[i]!=str[0])
		{
			str[i]=0;
			for(j=i;j>=0;j--)
			{
				if(str[j]==str[0])
				{
					str[j]=0;
					cout<<j<<" ";
					break;
				}
			}
			cout<<i<<endl;
		}
	}
		return 0;
}

