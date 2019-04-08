int main()
{
	int i,num=0;
	char str[105];
	cin.getline(str,105);
	char *p=str;
	for(i=0;i<strlen(str);i++)
	{
		if(*(p+i)!=' ')
			{
				cout<<*(p+i);
				num=0;
		    }
		if(*(p+i)==' '&&num==0)
			{
				cout<<' ';
				num++;
		    }
		
	}
	return 0;
}


