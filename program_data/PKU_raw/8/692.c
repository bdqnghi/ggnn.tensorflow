int main()
{
	int length[2]={0},a[2][100]={0},i,j,t,m;
	cin>>length[0]>>length[1];
	for (i=0;i<2;i++)
		for (j=0;j<length[i];j++)
			cin>>a[i][j];
	for (i=0;i<2;i++)
		for (m=1;m<length[i];m++)
			for (j=0;j<length[i]-m;j++)
				 if (a[i][j]>a[i][j+1])
				{
					t=a[i][j];
					a[i][j]=a[i][j+1];
					a[i][j+1]=t;
				}
	for (j=0;j<length[0];j++)
		cout<<a[0][j]<<" ";
	cout<<a[1][0];
	for (j=1;j<length[1];j++)
		cout<<" "<<a[1][j];
	return 0;
}