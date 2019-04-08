int main()
{
    int row,col;
    cin>>row>>col;
    int data[row][col];
    int (*p)[col]=data;
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>*(*(p+i)+j);
        }
    }
    int m,n;
    for(i=0;i<col;i++)
    {
        for(m=0,n=i-m;(m<row&&n>=0);m++,n--)
        cout<<*(*(p+m)+n)<<endl;
    }
    for(i=1;i<row;i++)
    {
        for(m=i,n=col-1;(m<row&&n>=0);m++,n--)
        cout<<*(*(p+m)+n)<<endl;
    }
    return 0;
}