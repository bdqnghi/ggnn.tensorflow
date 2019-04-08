
int main()
{
    int a1=1, a2=1, ai, n, a;
    cin >> n;
    
    for (int i=0; i < n; i++)
    {
        cin >> a;
        if(a==1 || a==2)
            cout << a1 << endl;
        else
            {
                for(int j=3; j <= a;j++)
                {
                        ai = a1 + a2;
                        a1 = a2;
                        a2 = ai;						            
                }
                cout << ai << endl;
                a1 = 1;
                a2 = 1;
            }
    
    }
    
    return 0;

}