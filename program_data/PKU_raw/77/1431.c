int i;
int num;
char s[102];
	char c1 ;
	char c2;
int sol()
{
	if(i >= num)
		return -1;
	int n = i;
	char b = s[i++];
	if(b == c1)
	{
		cout<<n<<" "<<sol()<<endl;
		return sol();
	}
	else if(b == c2)
		return n;
}
int main()
{
	
	cin>>s;
	num = strlen(s);
	c1 = s[0];
	for(int i = 1;i<num;i++)
	{
		if(s[i] != c1)
		{
			c2 = s[i];
			break;
		}
	}
	sol();
}