int m=0,l,t;
char b[100];
void ff(int x)
{
	m=x;
	for(int j=x+1;j<l;j++)
	{
		if(b[j]=='('){ff(j);break;}
		if(b[j]==')')
		{
			b[m]=' ';
			b[j]=' ';
			t=1;
			break;
		}
	}
	return;
}
void f(int x)
{
	m=0;t=0;
	for(int i=0;i<x;i++)
	{
		if(b[i]!='('&&b[i]!=')')b[i]=' ';
		if(b[i]=='('){ff(i);break;}
	}
	if(t==1)
	{
		f(x);
		return;
	}
	else{
		for(int i=0;i<x;i++)
		{
			if(b[i]=='(')cout<<"$";
			else if(b[i]==')')cout<<"?";
			else cout<<" ";
		}
		return;
	}
}
int main()
{
	int k,h;
	for(h=0;h<10;h++)
	{
		l=0;
		cin>>b;
		cout<<b<<endl;
		l=strlen (b);
		f(l);
		cout<<endl;
for(k=0;k<100;k++)b[k]='\0';

	}
	return 0;
}