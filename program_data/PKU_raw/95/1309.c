

int cmp(char* a,char* b)
{
	int ai=0,bi=0;
	while(a[ai]!=0&&b[bi]!=0)
	{
		if(a[ai]>b[bi])
			return 1;
		if(a[ai]<b[bi])
			return -1;
		ai++;
		bi++;
	}
	if(a[ai]!=0)
		return 1;
	if(b[bi]!=0)
		return -1;
	return 0;
}

void strlw(char *a)
{
	int i=0;
	while(a[i]!=0)
	{
		if(a[i]>='A'&&a[i]<='Z')
			a[i]+=('a'-'A');
		i++;
	}
}
int main()
{
	char a[1000];
	char b[1000];
	cin.getline(a,900,'\n');
	cin.getline(b,900,'\n');
	strlw(a);
	strlw(b);
	switch(cmp(a,b))
	{
	case 0:
		cout<<'='<<endl;
		break;
	case 1:
		cout<<'>'<<endl;
		break;
	case -1:
		cout<<'<'<<endl;
		break;
	}
	return 0;
}