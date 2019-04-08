//????a?
int nta(long a)
{
	if(a>=10)
	{
	char b;
	b=(char)('A'-10+a);
	return ((char) (b));
	}
	else
	{
	char b;
	b=(char)('1'-1+a);
	return ((char) (b));
	}
}
//a????
int atn(char i)
{
	long j=i;
	if(j>96)
	{
		j=j-'a'+10;
	}
	else
	{   if ((j>33)&&(j<58))
	{
		j=j-'1'+1;
	}
	else
	{
		j=j-'A'+10;
	}
	}
	return((long)(j));
}
//???????
int ten(long k)
{
	long l,m;
	l=k;
	for (int n = 0; n < 69; n++)
	{
		l=l/10;
		if (l>0)
		{
			m=n+1;
		}
	}
	return (m);
}
//??e??
int loe(long t,long v)
{
	long u,w=0;
	u=t;
	for (int x = 0; x < 69; x++)
	{
		u=u/v;
		if (u>0)
		{
			w=x+1;
		}
	}
	return (w);
}
//??????
int lth(char o[])
{
	long f=0;
	for (int g = 0; g <69 ; g++)
	{
		if((o[g]!=0)&&(o[g]!=32))f=f+1;
	}
	return ((f));
}
int main()
{
	long d,e;
	char h[70];
	memset(h,0,sizeof(h));
	cin>>d>>h>>e;
	long p;
	p=lth(h);
	long s=0;
	for (int q = 0; q < p; q++)
	{
		s=s*d+(atn(h[q]));
	}
	long y;
	y=(loe(s,e));
	char aa[70];
	memset(aa,0,sizeof(aa));
	long ab=s,ac=0;
	for (int z = 0; z < y+1; z++)
	{
		ac=ab;
		ab=ab/e;
		if (ab>0)
		{
			aa[z]=nta(ac%e);
		}
		else
		{
			aa[z]=nta(ac);
		}

	}
	if(aa[y]!=0)
	{
	for (int ad = 0; ad < y+1; ad++)
	{
		cout<<aa[y-ad];
	}
	}
	else cout<<"0";
	return 0;
}