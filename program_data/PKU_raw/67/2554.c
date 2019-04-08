

int main()
{
    void effect(double, double);
    int n, i, j;
    double k, data[100][2];
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < 2; j++)  cin >> data[i][j];
    }
    
    k = data[0][1]/data[0][0];
    
    for(i = 1; i < n; i++)
    {
        effect(k, data[i][1]/data[i][0]);
    }
    
    return 0;
}

void effect(double k, double m)
{
    if((k-m) > 0.05) cout << "worse" << endl;
    else if((m-k) > 0.05) cout << "better" << endl;
    else cout << "same" << endl;
}