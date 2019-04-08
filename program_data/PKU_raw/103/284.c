int main()
{
	char str[1001];
	cin>>str;
	int i,counter;
	for (i=0;str[i]!='\0';i++)
	{
		if (str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]+'A'-'a';
		}
	}
	char temp;
	counter=1;
	temp=str[0];
	for (i=1;str[i-1]!='\0';i++)
	{
		if (temp==str[i])
			counter++;
		else
		{
			cout<<'('<<temp<<','<<counter<<')';
			counter=1;
			temp=str[i];
		}
	}
	return 0;
}