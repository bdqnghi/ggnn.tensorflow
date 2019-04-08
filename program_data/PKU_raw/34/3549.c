
int f(int), g(int);                  //????

int main()
{
    int n, result;
    cin >> n;
    if(n == 1)                       //???????1?????End
        cout << "End" <<endl;
    else                             //????????1
    {
        do
        {
            if(n % 2 != 0)           //???????3?1
            {
                result = f(n);
                cout << n << "*" << 3 << "+" << 1 << "=" << result <<endl;
            }
            else                     //????????2
            {
                result = g(n);
                cout << n << "/" << 2 << "=" << result <<endl;
            }
            n = result;              //????????1
        }while(n != 1);
        cout << "End" <<endl;
    }

    return 0;
}

int f(int a)
{
    int m;
    m = a * 3 + 1;                    //?3?1

    return m;
}

int g(int a)
{
    int m;
    m = a / 2;                        //??2

    return m;
}
