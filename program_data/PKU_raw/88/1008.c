char a[10000];

int main()
{
	cin.getline(a,10000);
	char *p,*q=a;
	for(p=a;p<=a+strlen(a);)
	{
		if (*p>='0' && *p<='9')
		{
			p++;
		}
		else
		{
			for(;q<p;q++)
			{
				cout<<*q;
			}
			cout<<endl;
			while( p<=a+strlen(a) && (*p<'0' || *p>'9') ) p++;
			q=p;
		}
	}
	return 0;
}
 