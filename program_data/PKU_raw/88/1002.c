int main()
{
	char str[31];
	char *p=str;
	cin.getline(str,31);
	for(int i=0;i<strlen(str);i++)
	{
		if(*p>=48&&*p<=57)
		{
			cout<<*p;
			if(*(p+1)<48||*(p+1)>57)
			{
				cout<<endl;
			}
		}
		p++;
	}
	return 0;
}