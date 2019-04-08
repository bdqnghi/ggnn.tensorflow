int main()
{
	char a[105];
	for(int i=0;i<105;i++)
	{
		a[i]=' ';
	}
	cin.getline(a,105);
	int len;
	len=strlen(a);
	a[len]=' ';
	int count=0,c=0;
	for(int i=0;i<=len;i++)
	{
		char b[105];
		if(a[i]!=' ')
		{
			b[count]=a[i];
			count++;
		}
		if((a[i]==' ')&&(a[i-1]!=' '))
		{
			c++;
			if(c==1)
			{
				for(int j=0;j<count;j++)
				{
					cout<<b[j];
				}
			}
			else
			{
				cout<<" ";
				for(int j=0;j<count;j++)
				{
					cout<<b[j];
				}
			}
			for(int j=0;j<105;j++)
			{
				b[j]='\0';
			}
			count=0;
		}
	}
	return 0;
}