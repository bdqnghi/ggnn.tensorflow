int a[10000],b[10000],la,lb,c[20000];
void get();
void array();
void combine();
void out();
int main()
{
	get();
	array();
	combine();
	out();
	return 0;
}
void get()
{
	cin>>la>>lb;
	for(int i=0;i<la;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<lb;i++)
	{
		cin>>b[i];
	}
}
void array()
{
	int v;
	for(int i=0;i<la-1;i++)
	{
		for(int j=0;j<la-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				v=a[j];
				a[j]=a[j+1];
				a[j+1]=v;
			}
		}
	}
	for(int i=0;i<lb-1;i++)
	{
		for(int j=0;j<lb-i-1;j++)
		{
			if(b[j]>b[j+1])
			{
				v=b[j];
				b[j]=b[j+1];
				b[j+1]=v;
			}
		}
	}
}
void combine()
{
	for(int i=0;i<la;i++)
	{
		c[i]=a[i];
	}
	for(int i=0;i<lb;i++)
	{
		c[la+i]=b[i];
	}
}
void out()
{
	for(int i=0;i<la+lb;i++)
	{
		if(i==0)
		cout<<c[i];
		else
		cout<<' '<<c[i];
	}
}
