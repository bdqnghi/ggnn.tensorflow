/*
 * xiaoceyan5.4.cpp
 * ?????????
 *  Created on: 2011-1-8
 *      Author: william
 */
int main()
{
	int n, i, j, k, num, mingliu=-1;
	int b[100000][2];
	cin>>n;
	for(i=0 ;; i++)
	{
		cin>>b[i][0]>>b[i][1];
		if(b[i][0]==0&&b[i][1]==0) break;
	}
	num=i;
	for(i=0; i<n; i++)
	{
		int q=0;
		for(j=0; j<num; j++)
		{
			if(b[j][0]==i) break;
		}
		if(j==num)
		{
			for(k=0; k<num; k++)
			{
				if(b[k][1]==i) q++;
			}
			if(q==n-1) mingliu=i;
		}
	}
	if(mingliu==-1) cout<<"NOT FOUND";
	else cout<<mingliu;
	return 0;
}
