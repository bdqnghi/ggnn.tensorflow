int K(int i,int j)
{
	int m=1;
	for(int k=0;k<j;k++)
	{
		m=m*i;
	}
	return m;
}
int main()
{
	int x,y,q[10],w[10],g=0;
	cin>>x>>y;
	for(int i=0;i<10;i++)
	{
		q[i]=x/K(2,i);
		for(int j=0;j<10;j++)
		{
			w[j]=y/K(2,j);
			if(q[i]==w[j])
			{
				cout<<q[i];
				g=1;
				break;
			}
		}
		if(g==1)
			break;
	}
	return 0;
}