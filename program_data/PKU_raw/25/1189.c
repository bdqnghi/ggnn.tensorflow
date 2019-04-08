int main()
{
	int a[100]={1},*p;
	int n;cin>>n;
	if(n==0)
	{cout<<1;return 0;}
	for(int i=0;i<n;i++)
	{
		p=a;
		for(int j=0;*p!=0||*(p+1)!=0||*(p+2)!=0;j++)
		{
			*p=(*p)*2;
			p++;
		}
		for(int *q=a;*q!=0||*(q+1)!=0||*(q+2)!=0;q++)
		{
			if(*q>=10)
			{*q=*q-10;*(q+1)=*(q+1)+1;}
		}
	}
	if(*p==0)
		p--;
	while(p!=a)
	{cout<<*p;p--;}
	cout<<*p;
	return 0;
}