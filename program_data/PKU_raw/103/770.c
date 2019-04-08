int main()
{
	char str[1001];
	cin >>str;
	int sum =1,i;
	for(i = 0; str[i]!='\0';i++)
	{
		if('a'<=str[i]&&str[i]<='z')
			str[i]=str[i]-32;
	}
	for(i = 1; str[i]!='\0';i++)
	{
		if(str[i] == str[i -1])
			sum++;
		else 
		{
			cout <<'('<<str[i -1]<<','<<sum<<')';
			sum =1;
		}
	}
	cout <<'('<<str[i -1]<<','<<sum<<')'<<endl;
	return 0;
}
