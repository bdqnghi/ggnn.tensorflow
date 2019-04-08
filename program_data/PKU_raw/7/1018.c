main()
{
    char string[256],substr[256],replace[256];
    int i,j,k;
    int m,n;
    scanf("%s\n",string);
    for(i=0;string[i]!='\0';)
    {
        i++;
    }
    m=i;
    scanf("%s\n",substr);
    for(i=0;substr[i]!='\0';)
    {
        i++;
    }
    n=i;
    scanf("%s\n",replace);
    for(i=0;i<m;i++)
    {
        if(string[i]==substr[0])
        {
            for(j=0;j<n;j++)
            {
                if(string[i+j]!=substr[j])break;
            }
            if(j==n)
            {
                for(j=0;j<n;j++)
                string[i+j]=replace[j];
                break;
            }
        }
    }
    printf("%s",string);
}
