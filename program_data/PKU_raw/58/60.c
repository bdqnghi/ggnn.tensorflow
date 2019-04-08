int main()
{
    int n,i,temp;
    char s[1000][1000],*p;
    scanf ("%d\n",&n);
    for (i=0;i<n;i++)
    gets (s[i]);
    for (i=0;i<n;i++)
    {
        temp=0;
        p=&s[i][0];
        if (*p!='_' && isalpha(*p)==0)
        printf ("0\n");
        else
        {
            for (p=s[i]+1;*p!='\0';p++)
            {
                if (*p!='_' && isalpha(*p)==0 && isdigit(*p)==0)
                temp++;
            }
            if (temp!=0)
            printf ("0\n");
            if (temp==0)
            printf ("1\n");
            
        }
    }
    return 0;
}    