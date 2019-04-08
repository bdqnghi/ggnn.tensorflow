int main()
{
	char c[32];
	gets(c);
	int state = 0;
	for(int i = 0;i < strlen(c);i++)
	{
		if( * (c + i) >= '0' && *(c + i) <= '9')
		{
			if(state == 1)
			{
				cout<<endl;
				state = 0;
			}
			cout<<*(c+i);
		}
		else
		{
			if(state == 0)
			{
				state = 1;
			}
		}
	}
}