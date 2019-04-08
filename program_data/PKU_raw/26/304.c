int main()
{
	char a[101],i;
	cin.getline(a,101);
	char *p1=a;
	for(;*p1!='\0';p1++)
	{
		if(*p1!=' ')
			cout<<*p1;
		if(*p1==' ')
		{
			if(*(p1+1)!=' ')
				cout<<" ";
		}
	}
	cout<<endl;
	return 0;
}