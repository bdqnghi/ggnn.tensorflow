
int main()
{
    int f(int);
    
    int n, i, a;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> a;
        
        a = f(a);
        
        cout << a << endl;
    }
    
    return 0;
}

int f(int a)
{
    if(a == 1 || a == 2) return 1;
    else
    {
        return f(a - 1) + f(a - 2);
    }
}
