int main()
{
	int m,i=1,p,a=1,b=1,c[20]={0},sum;
	cin>>m;
	for (p=0;p<=m-1;p++)
		cin>>c[p];
	p=0;
	for (p=0;p<=m-1;p++)
	{   a=1;b=1;
		for (i=1;i<=c[p]-2;i++)
	  {
		  sum=a+b;a=b;b=sum;
	  }
	  cout<<b<<endl;
	}
	return 0;
}

