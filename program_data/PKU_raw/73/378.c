int main()//??? 
{
	int a[5][5];//??????????? 
	int b[5][5];//???????????????????? 
	int c[5][5];//????????????????????
	int i,j,m=0,k;
		for (i=0;i<5;i++)
		for (j=0;j<5;j++)
		b[i][j]=0;
			for (i=0;i<5;i++)
		for (j=0;j<5;j++)
		c[i][j]=0;    
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
			cin>>a[i][j];//????    
	for (j=0;j<5;j++)
		for (i=0;i<5;i++)
			for (k=0;k<5;k++)
			{
				if (a[i][j]>a[k][j])
					break;
				if  (a[i][j]<=a[k][j]&&k==4)
					b[i][j]=a[i][j];//?????????? 
			}
			for (i=0;i<5;i++)
				for (j=0;j<5;j++)
					for (k=0;k<5;k++)
					{
						if (a[i][j]<a[i][k])
							break;
						if  (a[i][j]>=a[i][k]&&k==4)
							c[i][j]=a[i][j];//?????????? 
					}
					for (i=0;i<5;i++)
						for (j=0;j<5;j++)
						{ 
							if (b[i][j]==c[i][j]&&b[i][j]!=0)
							 {
                                cout<<i+1<<" "<<j+1<<" "<<b[i][j]<<endl;//???????????????? ???? 
									m++;
                   
							}
						}
				if (/*b[i][j]!=c[i][j]&&i==4&&j==4&&*/m==0)
				cout<<"not found"<<endl;//else??not found 

						return 0;
}
