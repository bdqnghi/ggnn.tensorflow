int main()
{
	char m[1000];
	int i,flag=0,len;
	cin.getline(m,1000);
	len=strlen(m);
	for(i=0;m[i]!='\0';i++)
	{
		if(m[i]==' ')
		{
			if(flag==0)
			{
				continue;
			}
			else
			{
				flag=0;
				cout<<m[i];
			}
		}
		else
		{
			flag=1;
			cout<<m[i];
		}
	}
	cout<<endl;
	return 0;
}

