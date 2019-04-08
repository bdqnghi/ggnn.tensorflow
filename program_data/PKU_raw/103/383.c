

int main()
{
	char str[1001];
	cin.getline(str,1001);
	int len;
	len = strlen(str);
	int i, num = 1;
	char cur = str[0], p;
	if (len == 1)
	{
		if (cur <= 'z' && cur >= 'a')
		{
			p =  cur + 'A' - 'a' ;
			cout <<"(" << p <<"," << num <<")";
		}
		else
			cout <<"("<< cur << "," << num <<")";
	}
	for ( i = 1; str[i] !='\0'; i ++ )
	{
		if (cur == str[i] || str[i] == cur + 'A' - 'a' || str[i] == cur +'a' - 'A')
		{
			num ++;
			if (i == len - 1)
				if (cur <= 'z' && cur >= 'a')
				{
					p =  cur + 'A' - 'a' ;
					cout <<"(" << p <<"," << num <<")";
				}
				else
					cout <<"("<< cur << "," << num <<")";
		}
		else
		{
			if (cur <= 'z' && cur >= 'a')
			{
				p =  cur + 'A' - 'a' ;
				cout <<"(" << p <<"," << num <<")";
			}
			else
				cout <<"("<< cur << "," << num <<")";
			num = 1;
			cur = str[i];
			if (i == len - 1)
				if (cur <= 'z' && cur >= 'a')
				{
					p =  cur + 'A' - 'a' ;
					cout <<"(" << p <<"," << num <<")";
				}
				else
					cout <<"("<< cur << "," << num <<")";
				
		}
	}



	
	return 0;
}


