int main()
{
    int i,j,k,n;
    char a[1100],h;
    scanf("%s",a);
    for(i=0;a[i]!='\0';)
    {
        for(n=0,h=a[i],j=i;a[j]==h||(a[j]-h)==('A'-'a')||(h-a[j])==('A'-'a');j++)
        n=n+1;
        if(h<'Z')
        printf("(%c,%d)",h,n);
        else
        printf("(%c,%d)",(h-('a'-'A')),n);
        i=j;
    }
    getchar();
    getchar();
}    