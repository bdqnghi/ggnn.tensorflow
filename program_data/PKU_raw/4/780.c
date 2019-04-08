int main()
{
    int row,col;
    cin >> row >> col;
    int array[100][100];
    int i,j,k;
    
    for (i=0;i<=row-1;i++)
    {
        for (j=0;j<=col-1;j++)
        {
            cin >> array[i][j] ;
        }
    }
    if (col>row)
    {
    for (k=0;k<=row-1;k++)
    
    {
        i=0;
        j=k;
        do
        {
            cout << array[i][j] << endl;
            j--;
            i++;
        }
        while (j!=-1);
    }
    for (k=row;k<col-1;k++)
    {
        int s=0;
        j=k;
        i=0;
        do
        {
              cout << array[i][j] << endl;
              s++;
              j--;
              i++;
        }
        while (s!=row);
    }
        
    for (k=0;k<=row-1;k++)
    {
        j=col-1;
        i=k;
        do
        {
            cout << array[i][j] << endl;
            j--;
            i++;
        }
        while (i!=row);
    }
}
if (row==col)
{
    for (k=0;k<=row-1;k++)
    {
        i=0;
        j=k;
        do
        {
            cout << array[i][j] << endl;
            j--;
            i++;
        }
        while (j!=-1);
    }
    for (k=1;k<=row-1;k++)
    {
        j=col-1;
        i=k;
        do
        {
            cout << array[i][j] << endl;
            j--;
            i++;
        }
        while (i!=row);
    }
}
    
    
    
if (col<row)
    {
    for (k=0;k<=col-1;k++)
    
    {
        i=0;
        j=k;
        do
        {
            cout << array[i][j] << endl;
            j--;
            i++;
        }
        while (j!=-1);
    }
    for (k=1;k<row-col;k++)
    {
        int s=0;
        j=col-1;
        i=k;                                                  
        do                                                    
        {                                                     
              cout << array[i][j] << endl;                    
              s++;                                            
              j--;                                            
              i++;
        }
        while (s!=col);
    }
        
    for (k=row-col;k<=row-1;k++)
    {
        j=col-1;
        i=k;
        do
        {
            cout << array[i][j] << endl;
            j--;
            i++;
        }
        while (i!=row);
    }
}
          
    return 0;
}
