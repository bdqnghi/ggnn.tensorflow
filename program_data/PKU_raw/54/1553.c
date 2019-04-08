//****************
//?????******
int main()
{
	int n,k;
	cin>>n>>k;
	int a[1001]={0};
	int i=1,j=1;
	for(i=1;;i++)
	{
		a[n]=n*i+k;
		for(j=n-1;j>=1;j--)
		{
			if((a[j+1]%(n-1))!=0)
				break;
			else
			{a[j]=a[j+1]*n/(n-1)+k;}
		}
	
	    if(a[1]!=0)
		{
			cout<<a[1]<<endl;
	       break;
		}
	}
	return 0;
}
