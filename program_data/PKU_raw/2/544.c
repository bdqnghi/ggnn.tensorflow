int main()
{
    int n,i,j;
    cin >> n;
    char number[1000][5]={' '};
    char authors[1000][30]={' '};
    int author[30]={0};
    for (i=0;i<=n-1;i++)
    {
        cin >> number[i] >> authors[i];
        int len1=strlen(authors[i]);
        
        for (j=0;j<=len1-1;j++)
        {
            author[authors[i][j]-'A']++;
        }
    }
    int k,kmax=0; 
    int max=author[0];
    for (k=1;k<=25;k++)
    {
        if (author[k]>max)
        {
            max=author[k];
            kmax=k;
        }
    }
    char writer=kmax+'A';
    cout << writer << endl;
    cout << max << endl;
    for (i=0;i<=n-1;i++)
    {
        for (j=0;j<=25;j++)
        {
            if (authors[i][j]-'A'==kmax)
            {
                cout << number[i] << endl;
                break;
            }
        }
    }
    
    return 0;
}