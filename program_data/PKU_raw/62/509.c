int main()
{
    char st[1000];
    int i,j,l;
    gets(st);
    l=strlen(st);
    for (i=0;i<l-1;i++)
    {
        if ((st[i]==' ')&&(st[i+1]==' '))          //????????????.
        {
            for (j=i;j<l;j++) st[j]=st[j+1];
            i--;                                   //????,????????
        }
    }
    cout<<st<<endl;
    return 0;
}
