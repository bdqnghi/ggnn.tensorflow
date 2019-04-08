
int main()
{
	int i,k,j,al;
	char a[1000];
	gets(a);
	al=strlen(a);
	for(i=0;i<=al-1;i++)
	{
		if(a[i]>'Z')
			a[i]+='A'-'a';
	}
	for(i=0;i<=999;i++)
	{
		for(k=1;k<998;k++)
		{
			if(a[i+k]!=a[i])
			{
				cout<<"("<<a[i]<<","<<k<<")";
				i+=k-1;
				break;
			}
			
		}if(i>=al-1)break;
	}
		return 0;



}