int main()
{
    int i,j;
    i=0;
    j=1;
    char a[1001];
    gets(a);
    do
    {
        if(a[i]>'Z')
        {
            a[i]=a[i]-('a'-'A');
        }
        i=i+1;
    }
    while(a[i]!='\0');
    i=0;
    do
    {
        if(a[i]==a[i+1])
        {
            j=j+1;
        }
        else
        {
            printf("(%c,%d)",a[i],j);
            j=1;
        }
        i=i+1;
    }
    while(i<1001&&a[i]!='\0');
    return 0;
}
