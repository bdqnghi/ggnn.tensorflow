int main()
{
int row,col;
cin>>row>>col;
int a[100][100];
for(int i=0;i<row;i++)
for(int j=0;j<col;j++)
cin>>*(*(a+i)+j);
for(int i=0;i<col;i++)
for(int j=0;j<row&&j<=i;j++)
cout<<*(*(a+j)+i-j)<<endl;
for(int i=1;i<row;i++)
for(int j=0;col-1-j>=0&&i+j<row;j++)
cout<<*(*(a+i+j)+col-1-j)<<endl;
    return 0;
}