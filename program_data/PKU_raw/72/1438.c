int main()
{
	int sh[21][21];
	int m,n,i,j,t=0,f1=0,f2=0,f3=0,f4=0;
	cin >>m>>n;
	{
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin >>sh[i][j];
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				t=sh[i][j];
				if((i-1<0)||(sh[i-1][j]<=t))
				{
					f1=1;
				}
				else continue;
				if((i+1>=m)||(sh[i+1][j]<=t))
				{
					f2=1;
				}
				else continue;
				if((j-1<0)||(sh[i][j-1]<=t))
				{
					f3=1;
				}
			else continue;
				if((j+1>=n)||(sh[i][j+1]<=t))
				{
					f4=1;
				}
				else continue;
				if(f1+f2+f3+f4==4)
					cout <<i<<" "<<j<<endl;
				f1=0;f2=0;f3=0;f4=0;
			}
	}	return 0;
}