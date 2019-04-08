int main()
{
	int n,m,i,j,b[100][100],a[100],t;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>m;
		for(j=0;j<m;j++)
		{
			cin>>b[i][j];
		}
		if(b[i][m-1]+3*m>60)
		{
			for(j=0;j<m;j++)
			{
				if(b[i][j]+3*(j+1)>60 && b[i][j]+3*j<=60)
				{
					t=60-3*j-(3-(b[i][j]+3*(j+1)-60));
					cout<<t<<endl;
					break;
				}
			else if(b[i][j]+3*(j+1)<=60 && b[i][j+1]+3*(j+1)>60)
				{
					t=60-3*(j+1);
					cout<<t<<endl;
					break;
				}
			}
		}
		else 
		{
			t=60-m*3;
			cout<<t<<endl;
		}
	}
	return 0;
}





