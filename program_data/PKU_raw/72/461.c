
int main()
{
	int m,n;
	int MT[21][21];
	int Tx[401],Ty[401],x,y;
	int i,j,k=0;

	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)cin>>MT[i][j];
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i+1<m && i-1>=0 && j+1<n && j-1>=0)
			{
				if(MT[i][j]>=MT[i+1][j] && MT[i][j]>=MT[i-1][j] && MT[i][j]>=MT[i][j+1] && MT[i][j]>=MT[i][j-1])
				{
					Tx[k]=i;
					Ty[k]=j;
					k++;
				}
			}
			else if(i+1<m && i-1>=0 && j+1<n)
			{
				if(MT[i][j]>=MT[i+1][j] && MT[i][j]>=MT[i-1][j] && MT[i][j]>=MT[i][j+1])
				{
					Tx[k]=i;
					Ty[k]=j;
					k++;
				}
			}
			else if(i+1<m && i-1>=0 && j-1>=0)
			{
				if(MT[i][j]>=MT[i+1][j] && MT[i][j]>=MT[i-1][j] && MT[i][j]>=MT[i][j-1])
				{
					Tx[k]=i;
					Ty[k]=j;
					k++;
				}
			}
			else if(i+1<m && j+1<n && j-1>=0)
			{
				if(MT[i][j]>=MT[i+1][j] && MT[i][j]>=MT[i][j+1] && MT[i][j]>=MT[i][j-1])
				{
					Tx[k]=i;
					Ty[k]=j;
					k++;
				}
			}
			else if(i-1>=0 && j+1<n && j-1>=0)
			{
				if(MT[i][j]>=MT[i-1][j] && MT[i][j]>=MT[i][j+1] && MT[i][j]>=MT[i][j-1])
				{
					Tx[k]=i;
					Ty[k]=j;
					k++;
				}
			}
			else if(i==0 && j==0)
			{
				if(MT[i][j]>=MT[i+1][j] && MT[i][j]>=MT[i][j+1])
				{
					Tx[k]=i;
					Ty[k]=j;
					k++;
				}
			}
			else if(i==0 && j==n-1)
			{
				if(MT[i][j]>=MT[i+1][j] && MT[i][j]>=MT[i][j-1])
				{
					Tx[k]=i;
					Ty[k]=j;
					k++;
				}
			}
			else if(i==m-1 && j==0)
			{
				if(MT[i][j]>=MT[i-1][j] && MT[i][j]>=MT[i][j+1])
				{
					Tx[k]=i;
					Ty[k]=j;
					k++;
				}
			}
			else if(i==m-1 && j==n-1)
			{
				if(MT[i][j]>=MT[i-1][j] && MT[i][j]>=MT[i][j-1])
				{
					Tx[k]=i;
					Ty[k]=j;
					k++;
				}
			}

		}
	}

	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i-1;j++)
		{
			if(Tx[j]>Tx[j+1])
			{
				x=Tx[j];
				Tx[j]=Tx[j+1];
				Tx[j+1]=x;
				y=Ty[j];
				Ty[j]=Ty[j+1];
				Ty[j+1]=y;
			}
		}
	}

	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i;j++)
		{
			if(Tx[j]==Tx[j+1] && Ty[j]>Ty[j+1])
			{
				y=Ty[j];
				Ty[j]=Ty[j+1];
				Ty[j+1]=y;
			}
		}
	}


	for(i=0;i<k;i++)cout<<Tx[i]<<" "<<Ty[i]<<endl;

	return 0;
}