
int main()
{
    int ch[16], i, j, n, m;
    
    cin >> ch[0];
    
    while(ch[0] != -1)
    {
        n = 0;
        
        for(i = 1; ch[i - 1] != 0; i++)
        {
            n++;
            
            cin >> ch[i];
        }
            
        m = 0;
            
        for(i = 0; i < n; i++)
        {
            if(ch[i] % 2 == 1) continue;
            else
            {
                for(j = 0; j < n; j++)
                { 
                    if(ch[i] == 2 * ch[j]) m++;
                }
            }
        }    
        cout << m << endl;
        
        cin >> ch[0];
    }

    return 0;
}
