int main()
{
    int a, n[3], k = 0;
    cin >> a;
    for (int i = 3; i <= 7; i += 2)
    {
        if (a % i == 0)
        {
            n[k] = i;
            k += 1;
        }
}
    switch (k)
    {
        case 0: cout << "n"; break;
        case 1: cout << n[0]; break;
        case 2: cout << n[0] << " " << n[1]; break;
        default: cout << n[0] << " " << n[1] << " " << n[2]; break;
    }
    return 0;
}
