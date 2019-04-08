int main()
{
	char str[11],sub[4],*p,*max;
	while(cin>>str)
	{
		max=str;
		cin>>sub;
		for(p=str+1;*p;p++)if(*max<*p)max=p;
		for(p=str;p<=max;p++)cout<<*p;
		cout<<sub<<max+1<<endl;
	}
	return 0;
}
