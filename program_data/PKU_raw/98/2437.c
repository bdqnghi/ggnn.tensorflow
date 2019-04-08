int main()
{
	char a[1000][50];
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>*(a+i);
	int e=1;
	int len=0;
	for(i=1;i<=n;i++)
	{
		if(e)
		{
			cout<<*(a+i);
			e=0;
			len=strlen(*(a+i))+1;
		}
		else
		{
			if((len+strlen(*(a+i)))>80)
			{
				cout<<endl;
				len=0;
				i--;
				e=1;
			}
			else
			{
				cout<<' '<<*(a+i);
				len+=strlen(*(a+i))+1;
			}
		}
	}
	return 0;
}
