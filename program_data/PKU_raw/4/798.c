int main()
{
    int row,col,a[102][102],i,j,k;
    int (*p)[102]=a;
    cin>>row>>col;
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            cin>>*(*(p+i)+j);
        }
    }
    for (j=0;j<col;j++)
    {
        i=0;
        k=j;
        while (k>=0&&i<row)
        {
              cout<<*(*(p+i)+k)<<endl;
              i++;
              k--;
        }
    }
    for(i=1;i<row;i++)
    {
                      j=col-1;
                      k=i;
                      while(k<row&&j>=0)
                      {
                            cout<<*(*(p+k)+j);
                            if (i!=row-1||j!=col-1) cout<<endl;
                            k++;
                            j--;
                      }
    }            
    return 0;
}
