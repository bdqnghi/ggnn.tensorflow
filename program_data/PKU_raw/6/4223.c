//============================================================================
// Name        : 7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


int sum=0;
void ijudge (int i,int j,int k,int p,int q)
{
	if((j==0)||(j==p-1)||(k==0)||(k==q-1))
		sum+=i;
}

int main() {
	int n;
	cin>>n;
	int a[100][100];
	int p,q;
	for(int i=0;i<n;i++)
	{
		cin>>p>>q;
		sum=0;
		for(int j=0;j<p;j++)
			for(int k=0;k<q;k++)
			{
				cin>>a[j][k];
				ijudge(a[j][k],j,k,p,q);
			}
		cout<<sum<<endl;
	}
	return 0;
}