/*
 * t3_3.cpp
 *
 *  Created on: 2011-1-8
 *      Author: Lenovo
 */
int main()
{
	int juzhen[101][101];
	int m,n,i,j,sum;
	int k;
	cin>>k;
	while(k>0)
	{sum=0;
	cin>>m>>n;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			cin>>juzhen[i][j];
			if(i==0)sum+=juzhen[i][j];
			if(i==m-1)sum+=juzhen[i][j];
			if(j==0&&i!=0&&i!=m-1)sum+=juzhen[i][j];
			if(j==n-1&&i!=0&&i!=m-1)sum+=juzhen[i][j];
		}
	}
	cout<<sum<<endl;
	k--;
}
	return 0;
}
