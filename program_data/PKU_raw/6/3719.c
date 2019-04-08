
int main()
{
	int a[100][100],times,x,y,i,j,k,sum=0;
	int *pointer=NULL;
	cin>>times;
	for(i=1;i<=times;i++)
	{
		sum=0;
		cin>>x>>y;
		for(k=0;k<x;k++)
		{
			for(j=0;j<y;j++)
			{
				cin>>a[k][j];
				pointer=&a[k][j];
				if(k==0||j==0||k==x-1||j==y-1)
				   sum=sum+*pointer;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
