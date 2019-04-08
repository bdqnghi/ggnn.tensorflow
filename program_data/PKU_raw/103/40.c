int main()
{
    int i,j,m,n,t,s,l,r,c[1000];
    char a[1000],b[1000];
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='a'&&a[i]<='z')
            a[i]=a[i]-'a'+'A';
    }
    for(i=0;i<l;i++)
    {
        t=1;
        for(j=1;i+j<l;j++)
            {
                if(a[i]==a[i+j])
                    t++;
                else
                break;
            }
        printf("(%c,%d)",a[i],t);
        i=i+j-1;
    }
    getchar();
    getchar();
}
