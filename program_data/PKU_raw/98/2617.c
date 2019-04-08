
int main()
{
    int n, i, l, j, num = 0;
    char ch[45], *p;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> ch;
        l = strlen(ch);
        p = ch;
        
        if(num == 0)
        {
            for(j = 0; j < l; j++)
            {
                cout << *p++;
                num++;
            }
        }
            
        else if(num > 0 && num + l + 1 <=80)
        {
            cout << " ";
            num++;
                
            for(j = 0; j < l; j++)
            {
                cout << *p++;
                num++;
            }
        }
            
        else if(num > 0 && num + 1 + l > 80)
        {
            cout << endl;
            num = l;
            for(j = 0; j < l; j++)
            {
                cout << *p++;
            }
        }
    }
    
    return 0;
}
