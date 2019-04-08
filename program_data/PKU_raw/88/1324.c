int main()
{
	int a=0,i,j,k,l;
	char *p=NULL;
	char b[50];
	p=b;
	cin.get(b,50);
	l=strlen(b);
	for(i=0;i<l;i++)
	{
		if(*(p+i)>'0'&&*(p+i)<='9')
		{
			cout<<*(p+i);
			a=1;
		}
		if((*(p+i)<'0'||*(p+i)>'9')&&a==1)
		{
			cout<<endl;
			a=0;
		}
		if(*(p+i)=='0')
		{
			if(a==1)
				{cout<<*(p+i);}
			else
			{
				if(a==0&&(*(p+i+1)<'0'||*(p+i+1)>'9'))
				{cout<<*(p+i);a=1;}
			}
		}
	}
}