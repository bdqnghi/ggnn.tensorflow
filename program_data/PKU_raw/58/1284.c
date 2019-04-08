/*???*/
int main ()
{
	char str[100];
	int n,flag,i,j,len;
	cin >> n ;
	cin.get();
	for (i=0;i<n;i++)
	{
		flag=0;
		cin.getline(str,100);
		len=strlen(str);
		if (str[0]=='_')
		{
			flag=1;
		}
		else 
		{
			if (str[0]<='Z'&&str[0]>='A')
			{
				flag=1;
			}
			else
			{
				if (str[0]<='z'&&str[0]>='a')
				{
		    		flag=1;
				}
			}
		}
		if (flag==0)
		{
			cout << flag << endl;
			continue;
		}
		for (j=1;j<len;j++)
		{
			flag=0;
			if (str[j]<='Z'&&str[j]>='A'||str[j]<='z'&&str[j]>='a'||str[j]<='9'&&str[j]>='0'||str[j]=='_')
			{
				flag=1;
			}
			if (flag==0)
			{
				break;
			}
		}
		cout << flag << endl;
	}
	return 0;
}
