int main()
{
	char a[1000];
	char *p[1000];
	int i;
	cin.getline(a,1000);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			p[i]=&a[i];
		}
		else
		{
			p[i]=NULL;
		}
	}
	for(i=0;i<strlen(a);i++)
	{
		if(p[i]!=NULL)
		{
			cout<<*p[i];
		}
		else if(p[i+1]!=NULL)
		{
			cout<<endl;
		}
	}
	return 0;
}

