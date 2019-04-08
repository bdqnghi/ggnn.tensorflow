

int main()
{
	char test[MAX_LENGTH];
	cin.getline(test,MAX_LENGTH);
	for (int i=0;test[i]!=0;i++)
	{

		if (test[i]==' ')
		{
			while (true)
			{
				i++;
				if (test[i]!=' ')  //????,???????
				{
					cout<<' ';//??????
					break;//????
				}
			}
		}
		cout<<test[i];
	}


	return 0;
}
