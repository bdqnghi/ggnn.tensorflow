
int i = 0,len;
char str[100];
char a;
void P(int d)
{
    while(i < len)
    {
        if (str[i] == a) P(i++);
        else
        {
            cout << d << " " << i << endl;
            i++;
            return;
        }
    }
}

int main()
{
    cin>>str;
    a=str[0];
    len =strlen(str);
    P(0);
    return 0;
}
