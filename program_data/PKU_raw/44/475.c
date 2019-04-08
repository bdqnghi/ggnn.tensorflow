int po(int x,int y)
{
	int i,z=1;
	for(i=1;i<=y;i++)
	{
		z*=x;
	}
	return z;
}
int r(int n)
{
	int i,j,m[20],p=0,k,l;
	if(n>=0){for(i=1;n>0;i++)
		{
			m[i]=n%10;
		    n/=10;
		}
        for(j=1;j<=i-1;j++)
		{
			p+=m[j]*po(10,i-j-1);
		}
	}
	if(n<0)
	{
		n=-n;
		for(i=1;n>0;i++)
		{
			m[i]=n%10;
		    n/=10;
		}
        for(j=1;j<=i-1;j++)
		{
			p+=m[j]*po(10,i-j-1);
		}
		p=-p;
	}
    return p;
}
int main()
{
	int r(int n);
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	cout<<r(a)<<endl;
	cout<<r(b)<<endl;
	cout<<r(c)<<endl;
	cout<<r(d)<<endl;
	cout<<r(e)<<endl;
	cout<<r(f)<<endl;
	return 0;
}
