int main()
{
    int i,n,j,b;
    char word[300];
    char ti[28]="abcdefghijklmnopqrstuvwxyz";
    int a[26]={0};
    b=0;
    scanf("%s",word);
    n=(int)strlen(word);
    for(i=0;i<n;i++)
    {
        for(j=0;j<26;j++)
        {
            if(word[i]==ti[j])
            {
                a[j]=a[j]+1;               
            }                 
        }    
    }
    for(j=0;j<26;j++)
    {
        if(a[j]!=0)
        {
            printf("%c=%d\n",ti[j],a[j]);           
        }
        b=b+a[j];                 
    }
    if(b==0)
    {
        printf("No");        
    }
    return 0;
}