/************************************************
**authour:	???				*
**number:	1000012905			*
**descripition:	?????			*
************************************************/
int main()
{
	//?????  
	char	words[101];
	cin.getline(words, 101);
	//???????  
	char	*p = words;

	//????????????????  
	while(*(p + 1) != '\0')
	{
		cout << (char)(*p + *(p + 1));
		p ++;
	}
	cout << (char)(*p + words[0]) << endl;	//????????  

	return 0;
}
