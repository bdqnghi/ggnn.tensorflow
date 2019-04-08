

int main()
{
	int n,i,j,k,h,l,y;
	int *p=NULL;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		y=0;
		int x[101][101]={0};		
		cin>>h>>l;
		for(j=1;j<=h;j++)
		{
			for(k=1;k<=l;k++)
			{
				cin>>x[j][k];
			}
		}
		

		for(p=x[1]+1;p<=x[1]+l;p++)
		{
			y=y+(*p);
			
		}
		
		for(p=x[2]+1;p<=x[h-1]+1;p=p+101)
		{
			y=y+(*p)+(*(p+l-1));
		}
		
		for(p=x[h]+1;p<=x[h]+l;p++)
		{
			y=y+(*p);
		}
		cout<<y<<endl;


	}

	return 0;
}



