
int main()
{int a[103][103];

	int row,col;
	int i,j;
	cin>>row>>col;
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)cin>>*(a[i]+j);
for(i=0;i<row+col-1;i++)
	for(j=0;j<=i;j++)if(j<row&&i-j<col)cout<<*(a[j]+i-j)<<endl;

return 0;
}
