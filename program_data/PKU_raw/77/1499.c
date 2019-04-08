
int function(char* a,int m,char k)//??a[m]?'('
{
	int t=m;
	while(a[t+1]!=0)
	{
		if(a[t+1]!=k)
		{
			cout<<m<<' '<<t+1<<endl;
			return t+1;
		}
		else
		{
			t=function(a,t+1,k);
		}
	}
}

int main()
{
	char a[101],k;
	cin>>a;
	int n=-1;
	k=a[0];
	while(a[n+1]!=0)
	{
		n=function(a,n+1,k);
	}
	return 0;
}