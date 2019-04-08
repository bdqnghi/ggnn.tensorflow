


int main()
{
    int flag = 0;          
    int g;               
    int a[5][5];          
    int i , j;            
    int temp;              
    int row[5];           
    int column;            
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }
    
    for (i = 0; i < 5; i++)
    {
        column = 0;
        temp = a[i][0];
        for (j = 1; j < 5; j++) 
        {
            if (a[i][j] > temp)
            {
                column = j;                
                temp = a[i][j];
            }
        }
        row[i] = column;                  
    }
     
    for (i = 0; i < 5; i++)
    {
        g = 0;
        for (j = 0; j < 5; j++)
        {
            if (a[j][row[i]] < a[i][row[i]])          
            {
                g++;
            }
        }
        if (g == 0)                                    
        {
            cout << i + 1 << " " << row[i] + 1 << " " << a[i][row[i]] << endl;
            flag ++ ;                                    
        }
    }
    if (flag == 0)                                       
    {
        cout << "not found" <<endl;
    }
    return 0;
}
