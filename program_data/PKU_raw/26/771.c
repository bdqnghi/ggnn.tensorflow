int main()
{
	int q,i;
	int k[100]={0};
	char str[100];
	gets(str);
	char *p=NULL;
	p=str;
	for(i=0;p[i];i++)
	{
		if(p[i]==' '&&p[i+1]==' ')
		{
			k[i+1]=1;
		}
		if(k[i]!=1)
		cout<<p[i];
	}
	
	
	cin>>q;
	return 0;
}