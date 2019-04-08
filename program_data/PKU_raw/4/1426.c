

int main()
{

	int col,row,sz[100][100];
	cin>>row>>col;
		int l,m;
	for(l=0;l<row;l++)
	{
		for(m=0;m<col;m++)
		{
			cin>>sz[l][m];
		}
	}
	int i,j,k;

	for(k=0;k<row+col-1;k++)
	{
	for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				if(k==i+j)
				{
					cout<<sz[i][j]<<endl;
				}
				if(i+j>k)
					break;
				
			}
		}
	}

	


    
	return 0;
}
	
