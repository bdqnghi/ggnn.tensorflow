int main()
{
    int n;
    char sr[100][100];
    int i,j,p;
    char ddd;
    scanf("%d",&n); 
    scanf("%c",&ddd);
    for(i=0;i<n;i++) 
        gets(sr[i]);
    for(i=0;i<n;i++)
    {
        p=0;
        for(j=0;sr[i][j]!='\0';j++)
        {
            if(j==0)
            {
                if( (sr[i][j]>='A'&&sr[i][j]<='Z')||(sr[i][j]>='a'&&sr[i][j]<='z')||(sr[i][j]=='_'))
                    p=1; 
                else
                {
                    p=0;
                    break;
                }
            }
            else if(j>0)
            {
                if ((sr[i][j]>='A'&&sr[i][j]<='Z')||(sr[i][j]>='a'&&sr[i][j]<='z')||(sr[i][j]=='_')||(sr[i][j]>='0'&&sr[i][j]<='9'))
                    p=1;
                else
                {
                    p=0;
                    break;
                }
            }
        }
        if(p==0) printf("no\n");
        else printf("yes\n");
    }                 
    
    return 0;
}