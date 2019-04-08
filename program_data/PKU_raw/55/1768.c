main()
{
    int i,j;
    int n,m,a=0,b[1000];
    char str[1000],c;
    scanf("%d%c%s%c%d",&n,&c,str,&c,&m);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=48&&str[i]<=57)
            a=a*n+(str[i]-'0');
        if(str[i]>=97&&str[i]<=122)
            a=a*n+(str[i]-'a'+10);
        if(str[i]>=65&&str[i]<=90)
            a=a*n+(str[i]-'A'+10);
    }
        for(i=1;;i++)
    {
        
        b[i]=(a%(int)pow(m,i))/(int)pow(m,i-1);
        a=a-a%(int)pow(m,i);
        if(a==0)
            break;
    }
    for(j=i;j>=1;j--)
    {
        if(b[j]>=0&&b[j]<10)
            printf("%c",b[j]+'0');
        else
            printf("%c",b[j]-10+'A');
    }
    }
    