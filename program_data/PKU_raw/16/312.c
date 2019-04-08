//??????

int main()
{
    int a, a1, a2, a3, a4, a5;
    cin>>a;
    a1 = a / 10000;
    a2 = (a - a1 * 10000) / 1000;
    a3 = (a - a1 * 10000 - a2 * 1000) / 100;
    a4 = (a - a1 * 10000 - a2 * 1000 - a3 * 100) / 10;
    a5 = a % 10;
    if(a < 10)
        cout<<a5<<endl;
    else if (a < 100)
        cout<<a5<<a4<<endl;
    else if (a < 1000)
        cout<<a5<<a4<<a3<<endl;
    else if (a < 10000)
        cout<<a5<<a4<<a3<<a2<<endl;
    else
        cout<<a5<<a4<<a3<<a2<<a1<<endl;

    return 0;
}
