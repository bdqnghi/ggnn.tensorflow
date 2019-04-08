
int main()
{
	char a[250],b[250],c[250];
	cin>>a;
	cin>>b;
	int x=strlen(a);
	int y=strlen(b);
	char counter='0';
	int i=0;
	int max;
	if(x>y)max=x;
	else max=y;
	for(i=0;i<=max;i++)
	{
		c[i]=((a[x-1]-'0'+b[y-1]-'0'+counter-'0')%10+'0');
		counter=((a[x-1]-'0'+b[y-1]-'0'+counter-'0')/10+'0');
		if((x-1)!=0)x--;
		else if((x-1)==0)a[x-1]='0';
		if((y-1)!=0)y--;
		else if((y-1)==0)b[y-1]='0';
	}
	int count=0;
	for(int j=i-1;j>=0;j--)
	{
		if(c[j]=='0'&&count==0)continue;
		else if(c[j]!='0')
		{
			cout<<c[j];
			count++;
		}
		else if(c[j]=='0'&&count!=0)
		{
			cout<<c[j];
		}
	}
	if(i==2&&c[0]=='0')cout<<'0';
	cout<<endl;
	return 0;
}