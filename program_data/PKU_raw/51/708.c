
int main()
{
    char ch[500], *p, *q, *record[250];
    int n, l, num = 1, r, k, i, j, d = 0;
    
    cin >> n;
    
    cin >> ch;
    
    l = strlen(ch);
    
    for(p = ch; p < ch + l - 1; p++)
    {
        r = 1;
        
        for(q = p + 1; q < ch + l; q++)
        {
            k = 0;
            for(i = 0; i < n; i++)
            {
                if(*(q + i) == *(p + i)) k++;
            }
            if(k == n) r++;
        }
        
        if(r > num)
        {
            d = 0;
            num = r;
            record[d] = p;
            d++;
        }
        else if(r == num && num > 1)
        {
            record[d] = p;
            d++;
        }
    }
    
    if(num == 1) cout << "NO" << endl;
    else
    {
        cout << num << endl;
        for(i = 0; i < d; i++)
        {
            for(j = 0; j < n; j++)
            {
                cout << *(record[i] + j);
            }
            cout << endl;
        }
    }
    
    return 0;
}
