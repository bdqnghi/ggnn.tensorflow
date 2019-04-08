int main()
{
	char str[40];
	char *p=str;
	cin.getline(str,31);
	for(;*p!='\0';p++)
	{
		if(isdigit(*p)) cout<<*p;
		else cout<<endl;
	}
}