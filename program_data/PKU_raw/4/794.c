int main()
{
    int row,col;
    cin>>row>>col;
    int data[row*col];
    for (int i=0;i<row*col;++i)
        cin>>data[i];
    int *head=data;
    for (int i=0;i<col;++i)
    {
        int *p=head;
        for (int j=0;j<=min(i,row-1);++j)
        {
            cout<<*p<<endl;
            p+=col-1;
            }
        ++head;
        }
    --head;
    for (int i=1;i<row;++i)
    {
        head+=col;
        int *p=head;
        for (int j=0;j<=min(col-1,row-i-1);++j)
        {
              cout<<*p<<endl;
              p+=col-1;
              }
        }
    return 0;
    }
