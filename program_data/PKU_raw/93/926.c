int main() 
{
    int n, count = 0;
    cin >> n;
    if (n % 3 == 0)
    count++;
    if (n % 5 == 0)
    count ++;
    if (n % 7 == 0)
    count ++;
    switch (count)
    {
           case 0:
                cout << 'n';
                break;
           case 1:
                {
				if (n % 3 == 0)
                cout << 3;
                if (n % 5 == 0)
                cout << 5;
                if (n % 7 == 0)
                cout << 7;
                break;
                }
           case 2:
                {
				if (n % 3 !=0)
                cout << 5 << ' ' << 7;
                if (n % 5 !=0)
                cout << 3 << ' ' << 7;
                if (n % 7 !=0)
                cout << 3 << ' ' << 5;
                break;
                }
           case 3:
                cout << 3 << ' ' << 5 << ' ' << 7; 
                break;
    }
    return 0;
}