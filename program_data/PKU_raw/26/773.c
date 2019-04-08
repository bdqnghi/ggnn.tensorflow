
int main()
{
	char *haha,sen[10000];
	int i=0,count;
	cin.getline(sen,10000);
    count=1;

	haha=sen;
	while(sen[i]!='\0')
	{
		
		if(sen[i]!=' ') 
		{
			count=0;
			cout<<*(haha+i);
		}
		else 
		{
			if(count==0) 
			{
				cout<<" ";
				count++;
			}

		}
		i++;
	}

	return 0;
}

