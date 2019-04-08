
//****************************************
//*???????                      **
//*??? 1100012927              **
//*2011.11.29                     **
//****************************************
void f(char *);
int main()
{
    char n[50];
    char *p;
    cin.getline(n, 50);
    p = n;
    f(p);
        return 0;
}
void f(char *p)
{
    if (*p == '\0')
    {
        return;
    }
    
    
    if (*p != ' ')
    {
        cout << *p;
        f(++p);
    }
    else if(*(p + 1) != ' ')
    {
        cout << *p;
        f(++p);
    }
    else
        f(++p);
}
