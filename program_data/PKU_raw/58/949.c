int f(char word[81])
{
	int i,signal=1;
	
		for(i=0;word[i];i++)
		{
			if((word[i]=='_')||(word[i]<='Z'&&word[i]>='A')||(word[i]>='a'&&word[i]<='z')||(word[i]>='0'&&word[i]<='9'&&i>0))
				continue;
			else 
			{
				signal=0;
				break;
			}
		}
		if(signal==1)
			return 1;
		else 
			return 0;

}

int main()
{
	char word[81];
	int n,i;
	cin >>n;
	for(i=0;i<n+1;i++)
	{
		cin.getline(word,81,'\n');
		if(i!=0)
			cout <<f(word)<<endl;
	}
	return 0;
}