void Change(int b[11][11],int day)
{
	int i,j,k,l;
	int c[11][11]={0};
	for(i=1;i<10;i++)
		for(j=1;j<10;j++)
		{
			for(k=i-1;k<=i+1;k++)
				for(l=j-1;l<=j+1;l++)
				{c[i][j]=c[i][j]+b[k][l];}
				c[i][j]=c[i][j]+b[i][j];
		}
	if(day==1)
	for(int p=1;p<10;p++)
	{
		cout<<c[p][1];
		for(int q=2;q<10;q++)
		{cout<<" "<<c[p][q];}
		cout<<endl;
	}
	else
		Change(c,day-1);

}
int main()
{
	int m,n;
	cin>>m>>n;
	int a[11][11]={0};
	a[5][5]=m;
	Change(a,n);
	
	cin.get();
	return 0;
	}