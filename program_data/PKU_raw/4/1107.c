
int main()
{
    int row,col;
    int a[111][111];
    int *p[111];
    
    cin>>row>>col;
    
    for(int i=0;i<row;i++)
    p[i]=*(a+i);
    
    for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            cin>>*(p[i]+j);
    
    for(int i=0;i<row+col-1;i++)
        for(int j=i;j>=0;j--)
        {
            if(j>=col || i-j >=row)
                continue;
            if(j<col && i-j<row)
                cout<<*(p[i-j]+j)<<endl;
        }
    
    
    return 0;
}
