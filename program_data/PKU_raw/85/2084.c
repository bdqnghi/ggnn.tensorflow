int main()
{
	int n;
	cin>>n;
	int o;
	for(o=0;o<n;o++)
	{
		char str[21];
		int pan=0;
		cin>>str;
		if(str[0]==95||(str[0]<=122&&str[0]>=97)||(str[0]<=90&&str[0]>=65))
		{
			int i;
			for(i=1;str[i]!='\0';i++)
			{
				if(str[i]==95||(str[i]<=122&&str[i]>=97)||(str[i]<=90&&str[i]>=65)||(str[i]<=57&&str[i]>=48))
					pan=1;
				else
				{
					pan=0;
					break;
				}
			}
		}
		else
			pan=0;
		if(pan==1)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;

	}
	return 0;
}