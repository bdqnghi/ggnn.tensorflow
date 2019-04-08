/*
 * ????.cpp
 *
 *  Created on: 2011-1-4
 *      Author: wangwei
 */
int main()
{
	int i,j,a[6][6],m[6],t1=0,t2;
	for(i=1;i<=5;i++)
		for(j=1;j<=5;j++)
			cin>>a[i][j];
	for(i=1;i<=5;i++)
		m[i]=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=4;j++)
			if(a[i][j+1]>a[i][m[i]])
				m[i]=j+1;
		t2=0;
		for(j=1;j<=5;j++)
			if(a[j][m[i]]<a[i][m[i]])
				t2=1;
		if(t2==0)
		{
			cout<<i<<' '<<m[i]<<' '<<a[i][m[i]]<<endl;
			t1++;
		}
	}
	if(t1==0) cout<<"not found"<<endl;
	return 0;
}