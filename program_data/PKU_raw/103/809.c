struct letter
{
	char k;
	int res;
}number[1000];

int main()
{
	char a[1100]={0};
	cin>>a;
	int p=0;
	for(int i=0;i<1000;i++)
	{
		number[i].res=0;
	}
	for(int i=0;i<strlen(a);i++)
	{
		if(a[i]<='z'&&a[i]>='a')
		{
			a[i]=a[i]+'A'-'a';
		}
	}
	for(int i=0;i<strlen(a)-1;i++)
	{
		    number[p].k=a[i];
			number[p].res++;
		if(a[i]!=a[i+1])  p++;
		
	}
	number[p].k=a[strlen(a)-1];
			number[p].res++;
	for(int i=0;i<p+1;i++)
	{
		cout<<"("<<number[i].k<<","<<number[i].res<<")";
	}
	
	return 0;
}