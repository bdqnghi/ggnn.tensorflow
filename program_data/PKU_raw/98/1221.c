int main()
{
	int n;
	cin>>n;
	char ch[300][50];
	int lengthch[300];
	for (int i=0;i<n;i++)
	{
		cin>>*(ch+i);
	    *(lengthch+i)=strlen(*(ch+i));
	}
	int num=80;
	for (int i=0;i<n;i++)
	{
		if (i==n-1) cout<<*(ch+i);
		else {
		if (num-*(lengthch+i)-*(lengthch+i+1)>0)
		{cout<<*(ch+i)<<' ';num=num-*(lengthch+i)-1;}
		else
		{cout<<*(ch+i)<<endl;num=80;}}
	}
	return 0;
}