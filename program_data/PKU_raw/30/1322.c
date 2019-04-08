int main()
{
	int a,m,n,p,q,i,s;
	m=0;
	n=0;
	s=0;
	p=0;
	q=0;
	cin>>a;
	if (a<7)
	{
		for (i=0;i<=a;i=i+1)
		{
				s=s+i*i;
		}
	}
	else
	{
		for (i=0;i<=a;i=i+1)
		{
				s=s+i*i;
		}
		for (m=1;7*m<=a;m=m+1)
		{
			p=p+49*m*m;
		}
		for (n=0;10*n+7<=a;n=n+1)
		{
			q=q+(10*n+7)*(10*n+7);
		}
		if (a<70)
			s=s-q-p+49;
		else if(a<80)
		{
			for (i=1;70+i<=a;i=i+1)
				{
					s=s-i*i;
			}
		if (a==77)
			s=s+2*77*77;
		}
		else 
			s=s-q-p+49+77*77-71*71-72*72-73*73-74*74-75*75-76*76-78*78-79*79;
	}
		cout<<s<<endl;
	return 0;
}