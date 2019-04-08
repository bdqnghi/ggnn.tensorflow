int main()
{int array[1000][1000],a[1000];
int row,col;
int i,j;

cin>>row>>col;
for(i=0;i<row;i++)
	for(j=0;j<col;j++)
		cin>>array[i][j];

for(i=0;i<col+row;i++)
	{if(i<col)
		a[i]=0;
	else
		a[i]=i-col+1;}

for(i=0;i<col+row;i++)
	for(j=a[i];j<row&&j<=i;j++)
		cout<<array[j][i-j]<<endl;

return 0;
}
