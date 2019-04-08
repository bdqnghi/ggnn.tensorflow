int main()
{
    int row,col,n;
    cin >> row >> col;
    n=row*col;
    int array[row][col];
    int i,j;
    for (i=1;i<=row;i++)
    {
        for (j=1;j<=col;j++)
        {
            int a;
            cin >> a;
            array[i-1][j-1]=a;
        }
    }
    int mini=0,minj=0,k;
    for (k=1;k<=n;)
    {   
        if (j!=col)
        {             j=minj;
                      while (j<col)
                      {
                            cout << array[mini][j] << endl;
                            k++;
                            j++;
                      }
        }
        mini++;
        if (k>n)
        {
                break;
        }
        if (j==col)
        {
                   i=mini;
                   while (i<row)
                   {
                         cout << array[i][col-1] << endl;
                         k++;
                         i++;
                   }
        }
        col--;
        if (k>n)
        {
                break;
        }
        if (i==row)
        {
                   j=col-1;
                   while (j>=minj)
                   {
                         cout << array[row-1][j] << endl;
                         k++;
                         j--;
                   }
        }
        row--;
        if (k>n)
        {
                break;
        }
        if (j<minj)
        {
                   i=row-1;
                   while (i>=mini)
                   {
                         cout << array[i][minj] << endl;
                         k++;
                         i--;
                   }
        }
        minj++;
        if (k>n)
        {
                break;
        }
    }
    
    return 0;
}