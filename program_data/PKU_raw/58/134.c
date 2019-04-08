
int main()
{
	char input[82];
	int n  , len ,flag;
	cin>>n;
	cin.get();
	for( int  i = 1 ; i <= n ; i++)
	{
		flag = 1;
		cin.getline( input,82);
	    len = strlen( input); 
		if(((input[0] >= 'a') && (input[0] <= 'z')) || ( (input[0] >= 'A') && (input[0] <= 'Z')) || (input[0] == '_') )
		{
			for( int j = 1 ;j < len ; j++)
			{
			if(((input[j] >= 'a') && (input[j] <= 'z')) || (( input[j] >= 'A') && (input[j] <= 'Z')) || ((input[j] >= '0') && (input[j] <= '9')) || (input[j] == '_'))
			{
				continue;
			}
			else
			{
				flag = 0;
			}
			}
		}
		else
		{
			flag = 0;
		}
		cout<<flag<<endl;
	}
	return 0;
}

		
		

			
