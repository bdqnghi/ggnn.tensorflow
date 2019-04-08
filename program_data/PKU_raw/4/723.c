/*
 *????Ex6_4.cpp
 *??????
 *?????2012-12-10
 *?????????????
 */



int main()
{
    int n,m=0,k=0,i,j,x,y,row,col,a[100][100],*p; // p?????
    cin >> row >> col;
    n=row*col;
    for (i=0;i<row;i++)
    {
        p=(int *)a+i*100;
        for (j=0;j<col;j++)
            cin >> *p++; // ??
    }
    for (i=0,j=0;m<n;i=x,j=y)
    {
        m++; // ??????
        p=(int *)a+i*100+j; // ????
        cout << *p << endl;  // ??
        x=i+1;y=j-1; // ?????
        if (x>=row || y<0) // ????
        {
            x=0;y=++k;
            if (y>=col) // ??????
            {
                x=y-col+1;
                y=col-1;
            }
        }
    }
    return 0;
}