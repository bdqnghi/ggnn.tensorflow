int main()
{
	int k,m,n,i,j,jz[100][100],sum=0;   //????????????
	cin >> k;                           //??????
	while (cin >> m >> n)               //????????
	{
	    for(i=0;i<m;i++)                //?????
		{
			for(j=0;j<n;j++)
				cin >> jz[i][j];
		}
		if(m==1&&n==1)                  //???
			sum=jz[0][0];
		else if(m==1)
		{
			for(i=0;i<n;i++)
				sum=sum+jz[0][i];
		}
        else if(m==1)
		{
			for(i=0;i<n;i++)
				sum=sum+jz[0][i];
		}
		else
		{
			for(i=0;i<n;i++)                
				sum=sum+jz[0][i]+jz[m-1][i];
			for(i=1;i<m-1;i++)
				sum=sum+jz[i][0]+jz[i][n-1];
		}
		cout << sum << endl;            //???
		sum=0;
	}
	return 0;
}



