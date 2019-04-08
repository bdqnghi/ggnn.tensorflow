
void leave(char a[], char b)
{
    int i,temp;
    if (a[0] == b)
    {
        for (i = 0; a[i] != '\0'; )
        {
            if (a[i] == b )
            {
                temp = i;
                i++;
                while (a[i] == 0)
                {
                    i++;
                }
                if (a[i] != b && a[i] != 0 )
                {
                    a[i] = 0;
                    a[temp] = 0;
                    cout << temp << " " << i << endl;
                }
            }
        }
        leave(a,b);
    }
}

int main()
{
    char a[100];
    char b;
    cin.getline(a, 100);
    b = a[0];
    leave(a,b);
    return 0;
}