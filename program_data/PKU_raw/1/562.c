int disassamble(int, int);
int main()
{
    int n;
    int i = 1;
    int a, result;
    cin >> n;
    while(i <= n)
    {
            i++;
            cin >> a;
            result = disassamble(a, 2);
            cout << result << endl;
    }
    
    return 0;
}
int disassamble(int a, int y)
{
    int i, count = 1;
    if(a == 1)
         return 0;
    if(a == 2)
         return 1;
    for(i = y; i * i <= a; i++)
    {
          if(a % i == 0)
          {
                count = disassamble(a / i, i) + count;
           }
    } 
    return count;
}