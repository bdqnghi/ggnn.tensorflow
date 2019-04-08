int main()
{
	int i=0;
	char a[30];
	cin.getline(a,31,'\n');
	for (i=0;a[i]!='\0';i++)
	{
		if ((a[i]>='0')&&(a[i]<='9'))
		{
			cout<<a[i];
		}
		else
		{
			if (i!=0)  cout<<endl;
			while (1)
			{
			if (((a[i+1]<'0')||(a[i+1]>'9'))&&((i+1)<=33))   i++;
			else break;
			}
		}
	}

	return 0;
}


