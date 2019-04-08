int main()
{
	char a[10000];
	int len;
	char *p;
	int i, n,j;
	int lenq=0, lenh=0;
	cin>>n;
	cin.get();
	cin.getline(a,10000);
	p=a;
	i=0;
	while(*(p+i)!=' ')
	{

		i++;
	}
	lenq=i;
	len=lenq;
	while(n--)
	{
		i=0;
		p+=lenq;
		p++;
		while(*(p+i)!=' '&&*(p+i)!='\0')
		{
			i++;
		}
		lenh=i;
		len+=lenh;
		len++;
		p-=lenq;
		p--;
		if(len<=80)
			{
				for(j=0;j<=lenq-1;j++)
					cout<<*(p+j);
				if(n)
					cout<<" ";
			}
		else
			{
				for(j=0;j<=lenq-1;j++)
					cout<<*(p+j);
				cout<<endl;
				len=lenh;
			}
		p+=lenq;
		p++;
		lenq=lenh;
					
	}



	return 0;
}