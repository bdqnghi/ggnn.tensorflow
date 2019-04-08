int main()
{
	char a[1000];
	char *p[1000];
	int i;
	cin.getline(a,1000);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' ')
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
			cout<<" ";
		}
		else
			continue;
	}
	return 0;
}
