
int main()
{
    int n,i,l,sum;
    char s[220];

    scanf("%d",&n);
    sum=0;
    for (i=0;i<n;i++)
    {
        scanf("%s",s);
        l=strlen(s);
        if (sum==0) {printf("%s",s);sum=l;}
        else if (sum+1+l>80) {printf("\n%s",s);sum=l;}
        else {printf(" %s",s);sum=sum+1+l;}
    }
    return 0;
}
