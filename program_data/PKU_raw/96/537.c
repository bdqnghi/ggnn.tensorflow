int main()
{
	char input[101];
	cin >>input;
	int length=strlen(input),result[101],count=0,yu=0;
	while (count<length)
	{
		yu=yu*10+input[count]-'0';
		result[count]=yu/13;
		yu%=13;
		count++;
	}
	int head=0;
	for (int i=0;i<count;i++)
	{
		if (head==0&&result[i]!=0) head=1;
		if (head==1)
		{
			cout <<result[i];			
		}
	}
	if (head==0) cout <<"0";
	cout <<endl;
	cout <<yu <<endl;
	
	return 0;
}