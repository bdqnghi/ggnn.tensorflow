
int main()
{
    int array[105][105],row,col,(*p)[105];
    p = array;
    cin>>row>>col;
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
    {
        cin>>*(*(p+i)+j);       
    }
    int i,j,m=0;
    while(1)
    {
        if(m<col)
        {
            for(i=0,j=m;j>=0&&i<=row-1;i++,j--)
            {
                 cout<<*(*(p+i)+j)<<endl;
            }         
        }        
        else
        {
            for(i=m-col+1,j=col-1;i<=row-1&&j>=0;i++,j--)
            {
                 cout<<*(*(p+i)+j)<<endl;
            }
        }
        m++;
        if(m==row+col)break;
    }

    return 0;
} 
