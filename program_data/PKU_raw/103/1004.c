int main()
{
	char s[5000];
	int n=0;
	cin.getline(s,1500);
	for(int i=0;i<strlen(s);i++)
	{
		if(i==0)
		{
			cout<<"(";
			if(s[i]>='a')
				s[i]=s[i]-'a'+'A';
			cout<<s[i]<<",";
			n++;
		}
		else{
			if(s[i]>='a')
				s[i]=s[i]-'a'+'A';
			if(s[i]==s[i-1])
				n++;
			else
			{
				cout<<n<<")("<<s[i]<<",";
				n=1;
			}
		}
	}
	cout<<n<<")";
	return 0;
}