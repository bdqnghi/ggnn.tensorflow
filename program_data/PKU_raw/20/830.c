
int main()
{
	char str[11],sub[4],*max,*p;
	while(cin>>str)
	{
		cin>>sub;
		max=str;
		for(p=str;*p;p++)if(*max<*p)max=p;
		for(p=str;p<=max;p++)cout<<*p;
		cout<<sub<<max+1<<endl;
	}
	return 0;
}
