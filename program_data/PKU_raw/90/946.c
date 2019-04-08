//****************************************
//*?????                    **
//*??? 1100012927              **
//*2011.11.21                     **
//****************************************
int f(int, int);
int g(int, int);
int sum2 = 0;
int main()
{   
    int t, M, N, i, sum;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        sum = 0;
        cin >> M >> N;
        sum += f(M, N);
        cout << sum<<endl;
    }
    
    return 0;
}

int f(int M, int N)
{
    if (M < 0)
        return 0;
    else if (M == 1 || N == 1 || M == 0)
        return 1;
    else 
        return (f(M, N - 1) + f(M - N, N));
}
