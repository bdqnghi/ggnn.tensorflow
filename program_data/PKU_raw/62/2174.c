int main()
{
	int i,j=0;
	char a[105],b[105];
	gets(a);
	for(i=0;i<=strlen(a);i++)
	{
		if(a[i]!=' '||a[i]==' '&&a[i+1]!=' ')
		{
			b[j]=a[i];
			j++;
		}
		else continue;
	}
	for(i=0;i<strlen(b);i++)
		cout<<b[i];
	cout<<endl;
	return 0;
}
