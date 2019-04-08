int main()
{
	char str[200];
	char *pointer=NULL;
	cin.getline(str,200);
	pointer=str;
	while(*pointer!='\0')
	{
		if(*pointer!=' ')
			{
				cout<<*pointer;
				pointer++;
		}
		else
		{
			while(*(pointer+1)==' ')
				
					pointer++;
			pointer++;
			cout<<' ';
		}
	}
	return 0;
}