
int main()
{
    char c;
    int flag = 0;
    for (;;)
    {
        c = cin.get();
        if (c == '\n') break;
        if (c != ' ') {cout << c; flag = 0;}
        else
        {
            if (flag) continue;
            else
            {
                flag = 1;
                cout << c;
            }
        }
    }
  
    return 0;
}