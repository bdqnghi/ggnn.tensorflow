int main()
{
	int a[8][8],i,j,k,b,c,d,f=0,n,m;
         cin>>n;cin.get();cin>>m;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>a[i][j];										//????
		for(i=0;i<n;i++)
		{
			b=a[i][0],c=0;										//??i?????
			for(j=1;j<m;j++)
				if(a[i][j]>b)
				{
					b=a[i][j];
					c=j;										//?????????????????
				}
				d=a[0][c];
				for(k=0;k<n;k++)
					if(a[k][c]<d)								
					{
						d=a[k][c];
					
					}											//??????????
					if(d==a[i][c])
						cout<<i<<"+"<<c<<endl;
					else
						f++;
		}
		if(f==n)
			cout<<"No"<<endl;
		return 0;
}