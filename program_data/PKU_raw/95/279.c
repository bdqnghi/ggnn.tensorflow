int chance(char d[])
{
    int lend, i;
    lend = strlen(d);
    for(i=0;i<lend;i++)
    {
        if(d[i]<123&&d[i]>96)
        {
            d[i]=d[i]-32;
        }
    }
}
int main()
{
    char a[80], b[80];
    int lena, lenb;
    gets(a);
    gets(b);
    chance(a);
    chance(b);
    if(strcmp(a, b)==0)
    cout<<"="<<endl;
    if(strcmp(a, b)>0)
    cout<<">"<<endl;
    if(strcmp(a, b)<0)
    cout<<"<"<<endl;
    return 0;
}
