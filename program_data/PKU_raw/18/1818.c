//============================================================================
// Name        : test.cpp
// Author      : Yize Xie
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

void step1(int a[100][100],int n)//???????????????????????
{
	int hmin,lmin;
	for(int i=0;i<n;i++)
	{
		hmin=a[i][0];
		for(int j=0;j<n;j++)
		{
			if(a[i][j]<hmin)
				hmin=a[i][j];
		}
		for(int j=0;j<n;j++)
		{
			a[i][j]-=hmin;
		}
	}
	for(int i=0;i<n;i++)
	{
		lmin=a[0][i];
		for(int j=0;j<n;j++)
		{
			if(a[j][i]<lmin)
				lmin=a[j][i];
		}
		for(int j=0;j<n;j++)
		{
			a[j][i]-=lmin;
		}
	}
}
void step2(int a[100][100],int n)
{
	int i,j;
	for(i=1;i<n-1;i++)
		for(j=0;j<n;j++)
			a[i][j]=a[i+1][j];
	for(i=1;i<n-1;i++)
		for(j=0;j<n;j++)
			a[j][i]=a[j][i+1];

}
int main() {
	int n;
	cin >> n;
	int nn=n;
	while(nn--)
	{
		int tn=n;
		int a[100][100];
		for(int i=0;i<tn;i++)
			for(int j=0;j<tn;j++)
				cin >> a[i][j];
		int sum=0;
		while(tn>=2)
		{
			step1(a,tn);
			sum+=a[1][1];
			step2(a,tn);
			tn--;
		}
		cout << sum << endl;
	}
	return 0;
}