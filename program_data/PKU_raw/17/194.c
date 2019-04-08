int main()
{
	char input[101]={0},initial[101];
	int found=0;//????????
	while (cin.getline(input,101))
	{
	strcpy(initial,input);
	do 
	{
		found=0;
		int i=0,location=-1;
		while (input[i])
		{
			if (input[i]=='(') 
			{
				location=i;
				found=1;
			}
			if (input[i]==')') 
			{
				found=1;
				if (location==-1) input[i]='?';
				else 
				{
					input[location]=' ';
					input[i]=' ';
					location=-1;
					break;
				}
			}
			if (input[i]!='?'&&input[i]!='$'&&input[i]!='('&&input[i]!=')') input[i]=' ';
			i++;
		}
		if (location!=-1) 
			{
				input[location]='$';
				location=-1;
			}
	}
	while (found);
	cout <<initial <<endl <<input <<endl;
	}
	return 0;
}