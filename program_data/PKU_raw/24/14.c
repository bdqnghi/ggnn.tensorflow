int main()
{
	int i,j;
	char s[100][100],a[100],b[100],c,*p;
	cin>>s[0];
	for(i=1;c=getchar()!='\n';i++)
	{
		cin>>s[i];
	}
	strcpy(a,s[0]);
	a[strlen(s[0])]='\0';
	strcpy(b,s[0]);
	b[strlen(s[0])]='\0';
	for(j=0;j<i;j++)
	{
		p=s[j];
		if(strlen(s[j])>strlen(a))
		{
			strcpy(a,p);
		a[strlen(s[j])]='\0';}
	}
	cout<<a<<endl;
	for(j=0;j<i;j++)
	{
		p=s[j];
		if(strlen(s[j])<strlen(b))
		{
			strcpy(b,p);
		b[strlen(s[j])]='\0';}
	}
	cout<<b<<endl;
return 0;
}