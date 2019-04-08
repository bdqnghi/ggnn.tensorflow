char a[1000];
int match(char a[1000],char m,char f)
{   int i,j;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==f)
		{
		   break;
		}
	}
	if(a[i]=='\0')
	   return 0;
	for(j=i;j>=0;j--)
	{
		if(a[j]==m)
		{
			cout<<j<<' '<<i<<endl;
		    break;
		}
	}
	a[j]='*';a[i]='*';
	match(a,m,f);
}
int main()
{
	char m,f;
	cin>>a;
	m=a[0];
	int i;
	for(i=0;i<=999;i++)
	{
		if(a[i]!=m)
		{
			f=a[i];
			break;
		}
	}
	match(a,m,f);
	return 0;
}
