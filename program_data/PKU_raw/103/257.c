int main()
{
	char s[1000];
	cin.getline(s,1000);
	int len = strlen(s);
	int i , n = 1;
	for(i = 1; i < len;i++)
	{
		if(s[i] == s[i-1] || s[i] - s[i-1] == 'A'-'a' ||s[i] - s[i-1] =='a'-'A')
			n++;
		else
		{
			cout <<"(" <<(char)toupper(s[i-1])<<","<<n<<")";
			n=1;
		}
	}
	cout <<"(" <<(char)toupper(s[len - 1])<<","<<n<<")";
	return 0;
}