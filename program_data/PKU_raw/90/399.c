 // ?????????
 // ??????
 // ???2010?12?5?
 // ????????


int fang(int m,int n);
int main()
{
	int t,a,b,i,d;                        // ??????????
	cin>>t;
	for (i=1;i<=t;i++)
	{
		cin>>a>>b;
		d=fang(a,b);
		cout<<d<<endl;
		a=0;
		b=0;
		d=0;
	}
	return 0;
}

int fang (int m,int n)
{
	int s;
	if (m==0||n==1)
	return 1;
	else
	{
	if (m<n)
	{
	s=fang(m,m);
	}
	else 
	{
	s=fang(m-n,n)+fang(m,n-1);
	}
	return s;
	}
}