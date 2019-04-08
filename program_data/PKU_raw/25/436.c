int a[1000];
void jisuan(int a[])
{
	int l,i,flag;
	for(i=999;i>=0;i--)
	{
		if(a[i]!=0)
		{   l=i;
			break;
		}
	}
	a[0]=a[0]*2;
	flag=a[0]/10;
	a[0]=a[0]%10;
    for(i=1;i<=l+1;i++)
	{
		a[i]=2*a[i]+flag;
		flag=a[i]/10;
		a[i]=a[i]%10;
	}
}
int main()
{
	int N,i,l;
    cin>>N;
	for(i=0;i<1000;i++)
		a[i]=0;
	a[0]=1;
	for(i=0;i<N;i++)
		jisuan(a);
	for(i=999;i>=0;i--)
	{
		if(a[i]!=0)
		{
			l=i;
			break;
		}
	}
	for(i=l;i>=0;i--)
		cout<<a[i];
	return 0;

}
