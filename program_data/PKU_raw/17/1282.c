
int main()
{
	int n=0;
	scanf("%d",&n);
	
	int i=0;
	char string[101];
	char string_copy[101];
	char string_check[101];
	int len=0;
	int index=0;
	int start=0;
	int turn=0;
	char y='n';


	for(i=0;i<=n;i++)
	{
		len=0;
		gets(string);
		while(string[len])
			len++;
         
		strcpy(string_copy,string);

		for(index=0;index<len;index++)
		{
			if(string_copy[index]!='(' && string_copy[index]!=')')
				string_copy[index]=' ';
			if(string[index]=='(' || string[index]==')')
				y='y';
		}
		if(y=='n')
			continue;
           

		for(turn=0;turn<=len/2;turn++)
		{
			y='n';
			start=0;
			for(index=0;index<len;index++)
			{
				if(string_copy[index]=='(')
					start=index;
				if(string_copy[index]==')' && string_copy[start]=='(')
				{
					string_copy[index]=' ';
					string_copy[start]=' ';
				}
			}
		}
        


		strcpy(string_check,string_copy);
		for(index=0;index<len;index++)
		{
			if(string_copy[index]=='(')
				string_copy[index]='$';
			if(string_copy[index]==')')
				string_copy[index]='?';
		}
		if(strcmp(string_copy,string_check)!=0)
		{
			printf("%s\n%s\n",string,string_copy);
		}
		else
		{
			printf("%s\n",string);
		}
	}


	return 0;
}
			
