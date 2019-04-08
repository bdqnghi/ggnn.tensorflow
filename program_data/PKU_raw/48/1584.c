
int ch[9][9], ch2[9][9];

int main()
{
    int m, day;
    void d(int);
    
    memset(ch, 0, sizeof ch);
    cin >> m >> day;
    ch[4][4] = m;
    
    d(day);
    
    return 0;
}

void d(int day)
{
    int i, j;
    memset(ch2, 0, sizeof ch2);
    
    if(day == 0)
    {
        for(i = 0; i < 9; i++)
        {
            for(j = 0; j < 8; j++)
            {
                cout << ch[i][j] << " ";
            }
            
            cout << ch[i][j] << endl;
        }
    }
    else
    {
        for(i = 0; i < 9; i++)
        {
            for(j = 0; j < 9; j++)
            {
                if(ch[i][j] != 0)
                {
                    ch2[i][j] = ch[i][j];
                    ch[i][j] *= 2;
                }
            }
        }
        
        for(i = 0; i < 9; i++)
        {
            for(j = 0; j < 9; j++)
            {
                if(ch2[i][j])
                {
                    if(i > 0) ch[i - 1][j] += ch2[i][j];
                    if(i < 8) ch[i + 1][j] += ch2[i][j];
                    if(j > 0) ch[i][j - 1] += ch2[i][j];
                    if(j < 8) ch[i][j + 1] += ch2[i][j];
                    if(i > 0 && j > 0) ch[i - 1][j - 1] += ch2[i][j];
                    if(i > 0 && j < 8) ch[i - 1][j + 1] += ch2[i][j];
                    if(i < 8 && j > 0) ch[i + 1][j - 1] += ch2[i][j];
                    if(i < 8 && j < 8) ch[i + 1][j + 1] += ch2[i][j];
                }
            }
        }
        d(day - 1);
    }
}
