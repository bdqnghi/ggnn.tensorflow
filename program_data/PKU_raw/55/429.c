
void MyStrupr(char *p)
{
    int i = 0;
    for (i = 0; i < strlen(p); i++)
    {
        if ((p[i] >= 'a') && (p[i] <= 'z'))
        {
            p[i] -= 32;
        }
    }
}

void main()
{
    int a, b, s, i, j, k, m[100];
    long int x;
    char n[100], t[100];

    scanf("%d%s%d",&a,n,&b);

    MyStrupr(n);
    s = strlen(n);
    x = 0;

    for(i = 0; i <= s-1; i++)
    {
        if((n[i] >= 'A') && (n[i]<='Z'))
        {
            m[i] = n[i] - 55;
        }
        else
        {
            m[i] = (int)(n[i]) - 48;
        }

        x = (long)(x + pow(a, (s-1-i)) * m[i]);
    }

    j = 0;
    while(x >= b)
    {
        m[j] = x%b;
        if(m[j] > 9)
        {
            t[j] = m[j] + 55;
        }
        else 
        {
            t[j] = m[j] + 48;
        }

        x = x/b;
        j++;
    }

    if(x > 9) 
    {
        t[j] = x + 55;
    }
    else 
    {
        t[j] = x+48;
    }

    for(i = 0; i <= j; i++)
    {
        printf("%c", t[j - i]);
    }
    printf("\n");

}

