//????  ??? 12858

long int turntoten (int a,char n[])               //?n???a???10?????c?  
{
	long int ans = 0;
	int i,l,lc,w;              
	l = strlen(n);
	lc = 1; 
	for (i = l-1; i >= 0; i--)
	{
		if ((n[i] >= '0') && (n[i] <= '9'))
			w = n[i] - '0';
		if ((n[i] >= 'a') && (n[i] <= 'z'))
			w = n[i] - 'a' + 10;
		if ((n[i] >= 'A') && (n[i] <= 'Z'))
			w = n[i] - 'A' + 10;                       //?w??n??????
		ans +=  w * lc;
		lc *= a;
	}
	return ans;
}

void turntob (int b,long int c)
{
	char ans[100];
	int j,i = 0,ys = 0;
	if (c == 0)  cout << 0;
	while (c > 0)                   //???????????b???
	{
		ys = c % b;
		if (ys >= 10)
			ans[i] = (char) 55 + ys;
		else
			ans[i] = (char) 48 + ys;
		i++;                          
		c = c / b;
	}
	for (j = i-1; j >= 0; j--)
		cout << ans[j];              //???? 
}

int main()
{
	int a,b;
	long int c;           //c?n???????
	char n[100];
	cin >> a >> n >> b;
	c = turntoten (a,n);//?n???a???10?????c?
	turntob (b,c);         //?c???b??????
	cout << endl;
	return 0;
}