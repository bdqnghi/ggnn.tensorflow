
int main()
{
    int n, i, j = 0, t = 0, x1, x2;
    
    cin >> n;
    
    for(i = 0; i < n; i++)
    {
        cin >> x1 >> x2;
        
        if(x1 >= 90 && x1 <= 140 && x2 >= 60 && x2 <= 90) j++;
        else if(j == 0) continue;
        else if(j != 0)
        {
            t = t >=j ? t: j;
            j = 0;
        }
    }
    
    t = t >= j ? t : j;
    
    cout << t << endl;

    return 0;
}
