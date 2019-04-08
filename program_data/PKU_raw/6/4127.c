/*
 * 1000010175_fe5th_03.cpp
 *
 *  Created on: 2011-1-8
 *      Author: ???
 *      function:??????????
 */



int main(){
	int mat[100][100];
	int t,m,n,i,j,sum;
	cin>>t;
	for(;t>0;t--)
	{
		memset(mat,0,sizeof(mat));
		sum=0;
		cin>>m>>n;
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				cin>>mat[i][j];
				if(i==0||i==m-1||j==0||j==n-1)
					sum+=mat[i][j];
			}
		cout<<sum<<endl;
	}
	return 0;
}