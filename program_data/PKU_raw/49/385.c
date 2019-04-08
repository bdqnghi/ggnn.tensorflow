int main()
{
    char s[501];
    int i, j, k=0,l;
    cin.get(s,500);
    while(1)
    {
        for (i=(k/2);i<strlen(s)-(k/2);i++)
        {
            for (j=0;j<=(k/2);j++)
            {    
                if (s[i-j]!=s[i+1+j]) break;
                if (j==(k/2))
                {
                    for (l=i-j;l<=i+1+j;l++) 
                    cout << s[l];
                    cout << endl;
                } 
            }
        }
        k++;
        if (k==strlen(s)-2) break;
        for (i=(k/2+1);i<=strlen(s)-(k/2+1);i++)
        {
            for (j=1;j<=(k/2+1);j++)
            {
                if (s[i-j]!=s[i+j]) break;
                if (j==(k/2+1))
                {
                    for (l=i-j;l<=i+j;l++)
                    cout << s[l];
                    cout << endl;
                }
            } 

        }
        k++;
        if (k==strlen(s)) break;
    }
    return 0;
}