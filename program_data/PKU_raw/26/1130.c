int main()
{
    int i,m=0;
    char p[1000],q[1000];
    gets(p);
    for (i=0;p[i]!='\0';i++)
    {
        if (p[i]!=' ')
        {
            q[m]=p[i];
            m++;
        }
        else if (p[i]==' '&&p[i+1]!=' ')
        {
             q[m]=p[i];
             m++;
        }
        else
        {
            continue;
        }
    }
    for (int j=0;j<m;j++)
    {cout << q[j];}
    return 0;
}