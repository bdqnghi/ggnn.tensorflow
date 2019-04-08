void f(int x,char a[100])
{
	int s=-1,i=100;
	if(a[x]!=a[0])
	{
		for(i=x-1;i>=0;i--)
		{
			if(a[i]!=a[x])s++;
			else s--;
			if(s==0)
			{
				cout<<i<<" "<<x<<endl;
				break;
			}
		}
	}
	if(i!=0)f(x+1,a);
}
int main()
{
	int x=1;
	char a[100];
	cin>>a;
	f(x,a);
	cin.get();cin.get();cin.get();cin.get();
	return 0;
}
