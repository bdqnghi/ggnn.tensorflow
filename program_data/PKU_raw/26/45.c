int main()
{
	int i=0;
	char a[101]=" ";
	for(i=0;i<100;i++)
		cin.get(a[i]);
	for(i=0;i<100;i++)
	{
		if(((a[i]==' ')&&(a[i+1]!=' '))||(a[i]!=' '))
		cout<<a[i];
	}
	return 0;
}
