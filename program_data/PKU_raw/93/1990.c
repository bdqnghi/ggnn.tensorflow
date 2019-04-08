int main()
{
    int a;
    cin >> a;
    if (a % 105 == 0)
        cout << "3 5 7" << endl;
    if (a % 15 == 0 && a % 105 != 0)
        cout << "3 5" << endl;
    if (a % 35 == 0 && a % 105 != 0)
        cout << "5 7" <<endl;
    if (a % 21 == 0 && a % 105 != 0)
        cout << "3 7" <<endl;
    if (a % 3 == 0 && a % 5 != 0 && a % 7 != 0)
        cout << "3" <<endl;
    if (a % 5 == 0 && a % 3 != 0 && a % 7 != 0)
        cout << "5" <<endl;
    if (a % 7 == 0 && a % 3 != 0 && a % 5 != 0)
        cout << "7" <<endl;
    if (a % 7 != 0 && a % 3 != 0 && a % 5 != 0)
        cout << "n" <<endl;
        
    return 0;
}
