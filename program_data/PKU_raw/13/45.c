//?????
int main()
{
	int n,x;         //n?????
	int a[100];
	cin>>n;
	for(int k=0;k<100;k++)
		a[k]=0;
	for(int i=0;i<n;i++)
	{
		cin>>x;     //???????x
		for(int j=10;j<100;j++)
		{
			
			if(x==j) a[j]=a[j]+1;   
		}
		if(a[x]==1)
		{
			if(i!=0)
				cout<<" "<<x; //??????????????????x
			else
				cout <<x;
		}
	}
	return 0;
}