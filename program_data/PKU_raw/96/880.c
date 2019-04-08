int main()
{
	char a[100];
	int d, c[100], b[100], p = 0, temp;
	cin>>a;
	for(int i = 0; i < strlen(a); i++)                 //??????????????
		c[i] = a[i] - '0';
	if(strlen(a) == 1)                                 //????????????0????
	{
		cout<<0<<endl<<c[0]<<endl;
		return 0;                                      //?????
	}
	if(strlen(a) == 2 && c[0] * 10 + c[1] < 13)        //????????????13???
	{
		cout<<0<<endl<<c[0] * 10 + c[1]<<endl;
		return 0;                                       //?????
	}
	d = c[0] * 10 + c[1];                               //????????????
	for(int i = 2; i <= strlen(a); i++)                 //?????????????
	{
		b[p] = d / 13;
		p++;
		temp = d % 13;
		d = temp * 10 + c[i];
	}
	if(b[0] == 0)                                       //????0??????
	{
		for(int i = 1; i < p; i++)
			cout<<b[i];
		cout<<endl;
	}
	else                       
	{
		for(int i = 0; i < p; i++)
			cout<<b[i];
		cout<<endl;
	}
	cout<<temp<<endl;
	return 0;
}
