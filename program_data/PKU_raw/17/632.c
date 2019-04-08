char A[100],a[100];
int i,j=0,m;
int k;
int main()
{
	void pipei1(char x);
	void pipei2(char x);
	int n;
	while(gets(a))
	{
		i=0;
		m=0;
		k=strlen(a);
		if(k==0)
			break;
		for(n=0;n<k;n++)
		{
			A[n]=' ';
			cout<<a[n];
		}
		pipei1(a[j]);
		pipei2(a[j]);
		cout<<endl;
		for(n=0;n<k;n++)
		{
			cout<<A[n];
		}
		cout<<endl;
	}
	 
	return 0;
}
void pipei1(char x)
{
	if(j<k)
	{
		if(i<0)
			i=0;
		if(x=='(')
	    {
		    i++;
	    }
	    else if(x==')')
	    {
		    if(i==0)
		    {
			    A[j]='?';
		    }
			i--;
	    }
	    j++;
	    pipei1(a[j]);
	}
}
void pipei2(char x)
{
	if(j>=0)
	{
		if(m<0)
			m=0;
		if(x==')')
		{
			m++;
		}
		else if(x=='(')
		{
			if(m==0)
			{
				A[j]='$';
			}
			m--;
		}
		j--;
		pipei2(a[j]);
	}
}


