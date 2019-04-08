
int main()
{
    int n, m, k = 0, i, j = 0;
    
    double ch[100000];
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> ch[i];
    }
    
    cin >> m;
    
    for(i = 0; i < n; i++)
    {
        if(ch[i] == m)
        {
            ch[i] = 1.5;
            
            j++;
        }
    }
    
    for(i = 0; i < n; i++)
    {
        if(ch[i] != 1.5)
        {
            if(k != (n - j) - 1)
            {
                cout << ch[i] << " ";
                
                k++;
            }
            else
            {
                cout << ch[i] << endl;
            }
        }
        
        else continue;
    }
    
    return 0;
}
