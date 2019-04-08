//????a?
long long nta(long long a)
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
long long atn(char i)
{
	long long j=i;
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
	return((long long)(j));
}
//???????
long long ten(long long k)
{
	long long l,m;
	l=k;
	for (long long n = 0; n < 69; n++)
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
long long loe(long long t,long long v)
{
	long long u,w=0;
	u=t;
	for (long long x = 0; x < 69; x++)
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
long long lth(char o[])
{
	long long f=0;
	for (long long g = 0; g <69 ; g++)
	{
		if((o[g]!=0)&&(o[g]!=32))f=f+1;
	}
	return ((f));
}
int main()
{
	long long d,e;
	char h[70];
	memset(h,0,sizeof(h));
	cin>>d>>h>>e;
	long long p;
	p=lth(h);
	long long s=0;
	long long ae[100];
	ae[0]=1;
	for (long long af= 1;  af< 20; af++)
	{
		ae[af]=ae[af-1]*d;
	}
	for (long long q = p-1; q >=0 ; q--)
	{
		s=s+(atn(h[q])*ae[p-1-q]);
	}
	
	long long y;
	y=(loe(s,e));
	char aa[70];
	memset(aa,0,sizeof(aa));
	long long ab=s,ac=0;
	for (long long z = 0; z < y+1; z++)
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
	
	for (long long ad = 0; ad < y+1; ad++)
	{
		cout<<aa[y-ad];
	}
	 
	return 0;
}