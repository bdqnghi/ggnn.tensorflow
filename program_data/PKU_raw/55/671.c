
int main ()
{
	char string1[1000];
	int b,i;
	long c = 0;;
	int a;
	cin>>a>>string1;
	b=strlen(string1);
	for(i=0;i<b;i++)
	{
		if(string1[i]>='0'&&string1[i]<='9')
			c+=(string1[i]-'0')*pow(a,b-i-1);
		if(string1[i]>='a'&&string1[i]<='z')
			c+=(string1[i]-'a' + 10)*pow(a,b-i-1);
		if(string1[i]>='A'&&string1[i]<='Z')
			c+=(string1[i]-'A'+10)*pow(a,b-i-1);
		//cout << c<<endl;
	}
	//cout << c<<endl;
	int index = 0;
	char string2[1000];
	int d;
	cin >> d;
	int e;
	if(c == 0)
		cout << '0' << endl;
	while(c != 0)
	{
		e = c % d;
		c = c / d;
		if(e >= 10)
			string2[index] = 'A' + e - 10;
		else
			string2[index] = '0' + e;
		index ++;
	}
	string2[index] = '\0';
	for( i = index - 1;i>=0;i--)
		cout<<string2[i];
	cout<<endl;

	//cout<<string2<<endl;
	//while(1);
	return 0;
}