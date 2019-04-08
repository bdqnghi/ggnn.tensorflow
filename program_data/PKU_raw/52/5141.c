
int *p=NULL;
void rearrange(int str[100],int n)
{
	int t;
	t=str[n-1];
	for(p=&str[n-2];p>=&str[0];p--)
	{
		*(p+1)=*p;
	}
	str[0]=t;
}
int main()
{
	
	int number[100];
	int n,m;
	cin>>n>>m;
	int i;
	for(i=0;i<n;i++)
		cin>>number[i];
	while(m--)
	{
		rearrange(number,n);
	}
	for(i=0;i<n-1;i++)
		cout<<number[i]<<" ";
	cout<<number[n-1];
    return 0;
}
