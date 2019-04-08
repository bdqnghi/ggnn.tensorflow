    int main()
{
    char a[10000],b[10000];
    int c,d,m=0,z=0;
    double e,f,g,h;
    scanf("%lf",&h);
    scanf("%s",a);
    scanf("%s",b);
        for(int i=0;a[i]!='\0';i++)
    {
        if((a[i]=='A')||(a[i]=='T')||(a[i]=='C')||(a[i]=='G'))
        {
            z++;
        }
    }
    for(int i=0;b[i]!='\0';i++)
    {
        if((b[i]=='A')||(b[i]=='T')||(b[i]=='C')||(b[i]=='G'))
        {
            z++;
        }
    }

    c=strlen(a);
    d=strlen(b);
    if(c==d)
    {
        for(int i=0;a[i]!='\0';i++)
        {
            if(a[i]==b[i])
            {
                m++;
            }
        }
        f=m;
        g=c;
        e=f/g;
        if(e>=h&&z==2*c)
        {
            printf("yes");
        }
        else if(e<h&&z==2*c){
            printf("no");
        }        
    }
    if(c!=d||z!=2*c)
    {
        printf("error");
    }
    return 0;
}