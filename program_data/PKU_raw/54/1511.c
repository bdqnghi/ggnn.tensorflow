//?????
int main()
{
	int i,apple[100],n,k,m;
	cin>>n>>k;
	m=k;
	do
	{
		m=m+n;//m?????
		apple[n]=m;
		for (i=n-1;i>=1;i--)//??????????
		{
			if (apple[i+1]%(n-1)==0)
			{
				apple[i]=apple[i+1]*n/(n-1)+k;
			}
			else
			{
				break;
			}
		}
	}while(i>=1);
	cout<<apple[1]<<endl;
	return 0;
}