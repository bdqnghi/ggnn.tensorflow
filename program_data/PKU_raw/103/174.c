void strupr(char a[])
{
    int i;
    for(i=0;a[i]!='\0';i++)
    {
        if (a[i]>='a'&&a[i]<='z')
        {
            a[i]=a[i]+'A'-'a';
        }
    }
}
 int main()
{
    int i,m,n=1;
    char a[1001];
    gets(a);
    strupr(a);
    for(i=1;a[i-1]!='\0';i++)
    {
        if (a[i]==a[i-1])
        {
            n++;
        }
        else
        {
            printf("(%c,%d)",a[i-1],n);
            n=1;
        }

    }

    return(0);
}
