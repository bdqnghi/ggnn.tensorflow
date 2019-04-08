int main()
{
	int n;
	cin>>n;
	char str[1000][50];   //????
	int len=0;
	for(int i=1;i<=n;i++)
		cin>>*(str+i);
	for(int i=1;i<=n;i++)
	{
		if(len==0)
		{
			len=strlen(*(str+i));
			cout<<*(str+i);
		}
		else if(len+1+strlen(*(str+i))<=80)
		{
			len=len+1+strlen(*(str+i));
			cout<<" "<<*(str+i);
		}
		else if(len+1+strlen(*(str+i))>80)
		{
			len=strlen(*(str+i));
			cout<<endl<<*(str+i);
		}
	}
	return 0;
}
