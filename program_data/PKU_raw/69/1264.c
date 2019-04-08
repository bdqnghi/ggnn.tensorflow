
int main()
{
	char a[300];
	char b[300];
	char c[300];
	memset(c,0,sizeof(char)*300);
	cin>>a;
	cin>>b;
	int ci = 299;
	int ai = strlen(a)-1;
	int bi = strlen(b)-1;
	int jinwei = 0;
	while(ai>=0 && bi>=0)
	{
		c[ci] = (jinwei+a[ai]+b[bi]-2*'0')%10 + '0';
		jinwei = (jinwei+a[ai]+b[bi]-2*'0')/10;
		ai--;
		bi--;
		ci--;
	}
	while(ai>=0)
	{
		c[ci] = (jinwei+a[ai]-'0')%10 +'0';
		jinwei = (jinwei+a[ai]-'0')/10;
		ci--;
		ai--;
	}
	while(bi>=0)
	{
		c[ci] = (jinwei+b[bi]-'0')%10 +'0';
		jinwei = (jinwei+b[bi]-'0')/10;
		ci--;
		bi--;
	}
	while(ci>=0)
	{
		c[ci] = jinwei + '0';
		jinwei = 0;
		ci--;
	}
	int i;
	for(i=0;i<300;i++)
	{
		if(c[i]>'0')
			break;
	}
	if(i==300)
		cout<<0<<endl;
	else
	{
		for(i; i<300;i++)
			cout<<c[i];
		cout<<endl;

	}



	return 0;
}