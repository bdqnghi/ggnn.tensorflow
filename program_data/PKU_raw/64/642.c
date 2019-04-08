/**
* @file homework.cpp
* @author ???
* @date 2011-12-06
* @description
* ??????: ??????
*/

struct juli
{
	int a;
	int b;
	double dis;
}x[45],t;

int main()
{
	int n,m=0;
	int i,j,k,p=0,l,s,r;
	int a[10][3]={0};
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	}
	m=n*n/2-n/2;
	for(j=0;j<n-1;j++)
	{
		for(k=j+1;k<n;k++)
		{
			if(k>j)
			{
				x[p].a=j;
				x[p].b=k;
				x[p].dis=sqrt((a[j][0]-a[k][0])*(a[j][0]-a[k][0])
					+(a[j][1]-a[k][1])*(a[j][1]-a[k][1])
					+(a[j][2]-a[k][2])*(a[j][2]-a[k][2]));
				p++;
			}
		}
	}
	for(l=0;l<m-1;l++)
	{
		for(s=0;s<m-l-1;s++)
		{
			if(x[s].dis<x[s+1].dis)
			{
				t=x[s];
				x[s]=x[s+1];
				x[s+1]=t;
			}
		}
	}
	for(r=0;r<m;r++)
	{
		cout<<"("<<a[x[r].a][0]<<","<<a[x[r].a][1]<<","<<a[x[r].a][2]<<")-("
			     <<a[x[r].b][0]<<","<<a[x[r].b][1]<<","<<a[x[r].b][2]<<")="
				 <<fixed<<setprecision(2)<<x[r].dis<<endl;
	}
	return 0;
}



				


	