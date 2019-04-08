int main()
{
    char str[31];
    int i, j;
    char *p, *q;
    cin.getline(str, 31);
    int len;
    len = strlen(str);
    p = str;
    q = str;
    for(i = 0; i < len; i++)
    {
         if(*p - '0' >= 0 && *p - '0' <= 9)
         {
                p++;
         }
         else
         {
                while(*q != *p)
                {
                        cout << *q++;
                }
                if(*(q - 1) - '0' >= 0 && *(q - 1) - '0'<= 9)
                        cout << endl;
                p++;
                q = p;
         }
    }
    if(*(p - 1) - '0' >= 0 && *(p - 1) - '0' <= 9)
    {
          while(*q != *p)
                cout << *q++;
          cout << endl;
    }
    return 0;
}
