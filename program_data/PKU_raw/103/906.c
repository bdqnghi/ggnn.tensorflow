int main()
{
	char str[1005];
	char temp;
	int length=1;
	int i=1;
	cin>>str;
	int n;
	n=strlen(str);
	for(i=1;i<n;i++)
	{
		if((str[i]-str[i-1]==0)||(str[i]-str[i-1]==32)||(str[i]-str[i-1]==-32))	//????????????????????????????
		{
			length++;
		}
		else
		{
			if(str[i-1]<95)	//??
				cout<<"("<<str[i-1]<<","<<length<<")";
			else	//??
			{
				temp=str[i-1]-32;
				cout<<"("<<temp<<","<<length<<")";
			}
			length=1;
		}
	}
	//????????????1???1?
	if(str[n-1]<95)	//??
		cout<<"("<<str[n-1]<<","<<length<<")";
	else	//??
	{
		temp=str[n-1]-32;
		cout<<"("<<temp<<","<<length<<")";
	}
	return 0;
}