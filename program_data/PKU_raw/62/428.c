int main()
{
	int i=0,n;
	char ch[500];
    while(1)
	{
		ch[i]=cin.get();
		if(ch[i]=='\n')
			break;
		else if(ch[i]!=' ')
			i++;
		else if(ch[i-1]!=' ')
			i++;
	}
	n=i;
	for(i=0;i<n;i++)
		cout<<ch[i];
	return 0;
}