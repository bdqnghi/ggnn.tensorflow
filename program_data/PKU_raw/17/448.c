char a[1000]={'0'};
char c[1000]={' '};
int qq,pp;
int t=0;
int x(int m)
{
	if (qq<=m-1)
	{
	if (a[qq]=='(')
	{
		qq++;
		t++;
		x(m);
	}
	else if (a[qq]==')')
	{
		qq++;
		t--;
		if (t==-1)
		{
			c[qq-1]='?';
		    t=0;
		}
		x(m);
	}
	else if (a[qq]!='('&&a[qq]!=')')
	{
		qq++;
		x(m);
	}
	}
	t=0;
	return 0;
}
int y(int m)
{
	if (pp>=0)
	{
		if (a[pp]==')')
		{
			pp--;
			t++;
			y(m);
		}
		else if (a[pp]=='(')
		{
			pp--;
			t--;
			if (t==-1)
			{
				c[pp+1]='$';
				t=0;
			}
			y(m);
		}
		else if (a[pp]!='('&&a[pp]!=')')
		{
			pp--;
			y(m);
		}
	}
	t=0;
	return 0;
}
int main()
{
	char b;
	int i=0;
	while (cin.get(b))
	{
		if (b!='\n')
			a[i++]=b;
		else if (b=='\n')
		{
			for (int j3=0;j3<=i-1;j3++)
				c[j3]=' ';
			cout<<a<<endl;
			qq=0;
			x(i);
			pp=i-1;
			y(i);
			for (int j=0;j<=i-1;j++)
				cout<<c[j];
			cout<<'\n';
			for (int j1=0;j1<=i-1;j1++)
			{
				c[j1]=' ';
				a[j1]='\0';
			}
			i=0;
		}
	}
}
