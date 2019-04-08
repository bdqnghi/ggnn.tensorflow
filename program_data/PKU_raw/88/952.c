int main()
{
	char str[31];
	char *pointer=NULL;
	cin.getline(str,31);
	pointer=str;
	while(*pointer!=0)
	{
		if(*pointer>='0'&&*pointer<='9')
		{
			if(pointer==str||*(pointer-1)!='-')
			{
				while(*pointer>='0'&&*pointer<='9')
				{
					cout<<*pointer;
					pointer++;
				}
				cout<<endl;
			}
			else
			{
				while(*pointer>='0'&&*pointer<='9') pointer++;
			}
		}
		else pointer++;
	}
	return 0;
}
