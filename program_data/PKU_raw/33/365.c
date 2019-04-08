
int main()
{
    int i,j,n,m;
    char a[256],*pc;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",a);
        m=strlen(a);
        pc=a; 
        for(j=0;j<=m-1;j++) 
        {
            switch(*(pc+j))
            {
                case 'A':  *(pc+j)='T';break;
                case 'T':  *(pc+j)='A';break;
                case 'C':  *(pc+j)='G';break;
                case 'G':  *(pc+j)='C';break;
            }
        } 
        puts(a);
    }
    return 0;
} 