char a[101]={0};
int zuo[101]={0};
int n=0;
void change(int x)
{
	if (a[x]!=0)
	{
		if (a[x]=='(')
		{
			zuo[++n]=x;
		}
		else if (a[x]==')')
		{
			if (n>0)
			{
				a[x]=' ';
				a[zuo[n--]]=' ';
			}
		}
		else
			a[x]=' ';
		change (x+1);
	}

}
int main()
{
	while (cin>>a)
	{
		cout<<a<<endl;
		n=0; 
		change (0);
		for (int i=0;a[i]!=0;i++)
		{
			if (a[i]=='(')
				cout<<"$";
			else if (a[i]==')')
				cout<<"?";
			else 
				cout<<a[i];
		}
		cout<<endl;
	}
	
	return 0;
}