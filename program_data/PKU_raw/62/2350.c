
int main()
{
	char c;
	int f=1;
	while ((c=getchar())!=EOF)
	{
		if (c!=' ')
		{
			cout<<c;
			f=1;
		}//deal with words

		else if (f) {
			cout<<c;
			f=0;
		}//deal with space
	}
	return 0;
}