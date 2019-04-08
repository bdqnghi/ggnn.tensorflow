
int main()
{
	char t,a[50][20];
	int n=0,i;
	t=getchar();
	while(t>15)
	{
		i=0;
		while(t>='A')
		{
			a[n][i]=t;
			t=getchar();
			i++;
		}
		t=getchar();
		n++;
	}
	for(int k=n-1;k>0;k--)
	{
		i=0;
		while(a[k][i]>='A')
		{
			cout<<a[k][i];
			i++;
		}
		cout<<' ';
	}
	i=0;
		while(a[0][i]>='A')
		{
			cout<<a[0][i];
			i++;
		}
	return 0;
}