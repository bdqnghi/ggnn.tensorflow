main()
{
    char num[110];
    char shang[110];
    int yushu,i,d,m,n;
    gets(num);
    d=strlen(num);
    yushu=num[0]-'0';
    if(d==1)
    {
        m=num[0]-'0';
        shang[0]=m/13+'0';
        shang[1]='\0';
        yushu=m;
    }
    if(d==2)
    {
        m=(num[0]-'0')*10+num[1]-'0';
        shang[0]=m/13+'0';
        shang[1]='\0';
        yushu=m%13;
    }
    if(d>=3)
    {
        m=yushu*10+num[1]-'0';
        if(m>=13)
        {
        for(i=1;i<=d-1;i++)
        {
            m=yushu*10+num[i]-'0';
            yushu=m%13;
            shang[i-1]=m/13+'0';
        }
        shang[d-1]='\0';
        }
        else
        {
            yushu=yushu*10+num[1]-'0';
            for(i=2;i<=d-1;i++)
            {
                m=yushu*10+num[i]-'0';
                yushu=m%13;
                shang[i-2]=m/13+'0';
            }
            shang[d-2]='\0';
        }
    }

    puts(shang);
    printf("%d",yushu);
    getchar();  getchar();  getchar();  getchar();  getchar();
}

