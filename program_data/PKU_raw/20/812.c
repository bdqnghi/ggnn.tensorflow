void setin(char a[11],char b[4])
{
	int i,stop=0,max;
	max=(int)a[0];
	for(i=0;a[i]!='\0';i++)
	{
		if((int)a[i]>max)
		{
			max=(int)a[i];
			stop=i;
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(i==stop)
		{
			cout << a[i];
			cout << b;
		}
		else cout <<a[i];
	}
	cout << endl;
}
int main()
{
	char a[11]={'\0'},b[4]={'\0'};
	while(cin >> a>>b)
	{
		setin(a,b);
	}
	return 0;
}