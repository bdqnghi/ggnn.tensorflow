
int main()
{ 
    {
        char a[500];
        char b[100];
        int c[100];
        cin.getline(a, 500);
        int len = strlen(a);
        b[0] = a[0];
        c[0] = 1;
        for (int i = 1; i < 100; i++)
            c[i] = 0;
        int j = 0; 
        for (int i = 1; i < len; i++)
        {
            if (a[i] != b[j] && a[i] != b[j] + 32 && a[j] != b[j] - 32)
            {   
               j++;
               b[j] = a[i];
               c[j]++;
            }
            else if (a[i] == b[j] || a[i] == b[j] + 32 || a[i] == b[j] - 32)
            {
                 c[j]++;
            }
        }
        for (int i = 0; i <= j; i++)
            if (b[i] >= 'a' && b[i] <= 'z')
               b[i] -= 32;
        for (int i = 0; i <= j; i++)
            cout << '(' << b[i] << ',' << c[i] << ')';
        cout << endl;
    }
    
    char a;
    while (cin.get(a))
    {
        cin.get();
        if (a != '?') 
           break;
        cout << "?" << endl; 
        char a[500];
        char b[100];
        int c[100];
        cin.getline(a, 500);
        int len = strlen(a);
        b[0] = a[0];
        c[0] = 1;
        for (int i = 1; i < 100; i++)
            c[i] = 0;
        int j = 0; 
        for (int i = 1; i < len; i++)
        {
            if (a[i] != b[j] && a[i] != b[j] + 32 && a[j] != b[j] - 32)
            {   
               j++;
               b[j] = a[i];
               c[j]++;
            }
            else if (a[i] == b[j] || a[i] == b[j] + 32 || a[i] == b[j] - 32)
            {
                 c[j]++;
            }
        }
        for (int i = 0; i <= j; i++)
            if (b[i] >= 'a' && b[i] <= 'z')
               b[i] -= 32;
        for (int i = 0; i <= j; i++)
            cout << '(' << b[i] << ',' << c[i] << ')';
        cout << endl;
    }
    

    return 0;
}
