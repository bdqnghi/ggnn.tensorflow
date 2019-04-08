int main()
{
	int a[5][5];
	int i,j,m,n,x=1;
	for(i=0;i<=4;i++)
		for(j=0;j<=4;j++)
			cin>>a[i][j];
	for(i=0;i<=4;i++)
			for(j=0;j<=4;j++)
			{  int w=1,v=1;
				for(m=0;m<=4;m++)
					if(a[i][j]<a[i][m]){w=0;break;}
				for(n=0;n<=4;n++)
					if(a[i][j]>a[n][j]){v=0;break;}
				if(w&&v) {cout<<i+1<<" "<<j+1<<" "<<a[i][j]<<endl;x=0;}
			}
	if(x)cout<<"not found"<<endl;
	return 0;
}