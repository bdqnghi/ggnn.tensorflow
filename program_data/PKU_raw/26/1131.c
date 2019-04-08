int main()
{
	char Buffer[200] = {0} ;
	gets(Buffer) ;
	int count = 0;
	while (Buffer[count])
	{
		count ++ ;
	}
	for (int i = 0 ; i < count - 1 ; i ++)
	{
		if (Buffer[i] == ' ' && Buffer[i+1] != ' ')
		{
			cout<<Buffer[i];
		}
		else if (Buffer[i] != ' ')
		{
			cout<<Buffer[i];
		}
	}
	cout<<Buffer[count - 1]<<endl ;
	return 0;
}