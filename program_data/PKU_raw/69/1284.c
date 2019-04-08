int main()
{
	char a[300];
	char b[300];
	int c[300];
	int j=299;
	for(int i=0;i<=299;i++)
	{
		a[i]=0;
		b[i]=0;
		c[i]=0;
	}
	cin>>a>>b;
	int lena,lenb;
	for(int i=0;i<300;i++)
	{
		if (a[i]==0)
		{lena=i-1;
		break;}
	}
	for(int i=0;i<300;i++)
	{
		if (b[i]==0)
		{lenb=i-1;
		break;}
	}
	for(int i=0;i<=lena;i++)
	{
		a[i]=a[i]-('1'-1);

	}
	for(int i=0;i<=lenb;i++)
	{
		b[i]=b[i]-('1'-1);
	}
	if (lena==lenb)
	{
		for(int i=lenb;i>=0;i--)
				{
					c[i+1]+=b[i]+a[i];
					if(c[i+1]>=10)
					{
						c[i]++;
						c[i+1]-=10;
					}
				}
		if (c[0]==1)
		{
			cout<<'1';
		for(int i=1;i<=lena+1;i++)
			cout<<c[i];
		}
		else
		{
			for(int i=1;i<=lena+1;i++)
				if(c[i]!=0)
				{
					j=i;
					break;
				}
			if(j==299)
			{
				cout<<0;
				return 0;
			}
			for(int i=j;i<=lena+1;i++)
				cout<<c[i];
		}
	}
	if (lena<lenb)
	{
		for(int i=lenb;i>=lenb-lena;i--)
			a[i]=a[i-lenb+lena];
		for(int i=0;i<lenb-lena;i++)
			a[i]=0;
		for(int i=lenb;i>=0;i--)
		{
			c[i+1]+=b[i]+a[i];
			if(c[i+1]>=10)
			{
				c[i]++;
				c[i+1]-=10;
			}
		}
		if (c[0]==1)
		{
			cout<<'1';
		for(int i=1;i<=lenb+1;i++)
			cout<<c[i];
		}
		else
		{
			for(int i=1;i<=lenb+1;i++)
				if(c[i]!=0)
				{
					j=i;
					break;
				}
			if(j==299)
			{
				cout<<0;
				return 0;
			}
			for(int i=j;i<=lenb+1;i++)
				cout<<c[i];
		}
		return 0;
	}
	if (lena>lenb)
	{
		for(int i=lena;i>=lena-lenb;i--)
			b[i]=b[i-lena+lenb];
		for(int i=0;i<lena-lenb;i++)
			b[i]=0;
		for(int i=lena;i>=0;i--)
		{
			c[i+1]+=b[i]+a[i];
			if(c[i+1]>=10)
			{
				c[i]++;
				c[i+1]-=10;
			}
		}
		if (c[0]==1)
		{
			cout<<'1';
		for(int i=1;i<=lena+1;i++)
			cout<<c[i];
		}
		else
		{
			for(int i=1;i<=lena+1;i++)
				if(c[i]!=0)
				{
					j=i;
					break;
				}
			if(j==299)
			{
				cout<<0;
				return 0;
			}
			for(int i=j;i<=lena+1;i++)
				cout<<c[i];
		}
	}
	return 0;
}
