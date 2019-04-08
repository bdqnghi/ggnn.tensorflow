int main()
{	
	char a[85] ;
	char b[85];
	gets(a);
	gets(b);
	for(int i = 0;i<strlen(a);i++)
	{
		if(a[i] > 'Z')
			a[i] -= 32;
	}
	for(int i = 0;i<strlen(b);i++)
	{
		if(b[i] > 'Z')
			b[i] -= 32;
	}
	int key = strcmp(a,b);
	if(key == 0) cout<<"=";
	else if(key == 1) cout<<">";
	else cout<<"<";
}