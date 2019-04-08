int main()
{
	int panduan(int a,int b,int c,int d,int e);
	int i,j,p,q,m,a,b,c,d,e;
	for(i=1;i<=5;i++)
		for(j=1;j<=5;j++)
			for(p=1;p<=5;p++)
				for(q=1;q<=5;q++)
					for(m=1;m<=5;m++)
					{
						a=i;b=j;c=p;d=q;e=m;
						if(panduan(a,b,c,d,e)==1&&a!=b&&a!=c&&a!=d&&a!=e&&b!=c&&b!=e&&b!=d&&c!=d&&c!=e&&d!=e)
							printf("%d %d %d %d %d\n",a,b,c,d,e);
					}
	return 0;
}
int panduan(int a,int b,int c,int d,int e)
{
	if(a==1||b==1||e==1||a==2||e==2||e==3||e==1)
	{
		return 0;
	}
	else if(c==1)
	{
		if(a!=5)
			return 0;
		else if(b==2)
		{
			if(e==1||d==1)
				return 0;
			else
				return 1;
		}
		else if(d==2)
		{
			return 0;
		}
	}
	else if(d==1)
	{
		if(c!=5)
			return 0;
		else if(b==2)
		{
			return 0;
		}
		else if(c==2)
		{
			if(a==5)
				return 1;
			else
				return 0;
		}
	}
}