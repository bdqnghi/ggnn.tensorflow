
int main()
{
    int matrix[5][5], i, j, k, m, s, t, n = 0;
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        cin >> matrix[i][j];
    }
    
    for(i = 0; i < 5; i++)
    {
        s = i;
        t = 0;
        m = matrix[i][0];
        
        for(j = 0; j < 5; j++)
        {
            if(m < matrix[i][j])
            {
                m = matrix[i][j];
                t = j;
            }
        }
        
        j = 0;
        
        for(k = 0; k < 5; k++)
        {
            if(m > matrix[k][t]) j++;
        }

        if(j == 0)
        {
            cout << s + 1 << " " << t + 1 << " " << m << endl;
            n++;
        }
    }
    
    if(n == 0) cout << "not found" << endl;

    return 0;
}
