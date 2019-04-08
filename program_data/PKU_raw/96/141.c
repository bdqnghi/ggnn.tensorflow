char chufa1(char a,char b);
char chufa2(char a,char b);
char chufa3(char a,char b,char c);
char chufa4(char a,char b,char c);

main()
{
    char a[100],d,e,f,g;
    scanf("%s",a);
    int i=0,j=0,k=0;
    j=strlen(a);
    if(j==1||(j==2 && a[0]=='1' && (a[1]=='0'||a[1]=='1'||a[1]=='2')))
    {
        printf("0\n%s",a);
        getchar();
        getchar();
        return 0;
    }   
    for(i=0;i<j;i++)
    {
        a[i]=a[i]-'0';
    }

    if(a[0]==1&&a[1]<3)
    {
        k=1;
        d=chufa3(a[0],a[1],a[2]);   
        e=chufa4(a[0],a[1],a[2]);
        a[1]=d;
        a[2]=e;
        i++;
        for(i=2;i<j-1;)
        {
            if(a[i]>1||(a[i+1]>2&&a[i]==1))
            {
                 d=chufa1(a[i],a[i+1]);
                 e=chufa2(a[i],a[i+1]);
                 a[i]=d;
                 a[i+1]=e;
                 i++;                    
            }
            else
            {
                 if(i+2==j)
                 break;
                 d=chufa3(a[i],a[i+1],a[i+2]);   
                 e=chufa4(a[i],a[i+1],a[i+2]);
                 a[i]=0;
                 a[i+1]=d;
                 a[i+2]=e;
                 i=i+2;
            }
            d=0;
            e=0;                
        }
    }
    else
    for(i=0;i<j-1;)
    {   
        if(a[i]>1||(a[i+1]>2&&a[i]==1))
        {
            d=chufa1(a[i],a[i+1]);
            e=chufa2(a[i],a[i+1]);
            a[i]=d;
            a[i+1]=e;
            i++;                    
        }
        else
        {
             if(i+2==j)
             break;
             d=chufa3(a[i],a[i+1],a[i+2]);   
             e=chufa4(a[i],a[i+1],a[i+2]);
             a[i]=0;
             a[i+1]=d;
             a[i+2]=e;
             i=i+2;
        }
        d=0;
        e=0;                
    }
    if(k==0)
    {
        for(i=0;i<j-1;i++)
        {
            a[i]=a[i]+'0';
            printf("%c",a[i]);                  
        }
        if(a[i]<10)
        {
            a[i]=a[i]+'0';
            printf("\n%c",a[i]);
        }
        else 
        {
            f=a[i]/10;
            g=a[i]%10;
            f=f+'0';
            g=g+'0';
            printf("\n%c%c",f,g);
        }
    }
    else
    {
        for(i=1;i<j-1;i++)
        {
            a[i]=a[i]+'0';
            printf("%c",a[i]);                  
        }
        if(a[i]<10)
        {
            a[i]=a[i]+'0';
            printf("\n%c",a[i]);
        }
        else
        {
            f=a[i]/10;
            g=a[i]%10;
            f=f+'0';
            g=g+'0';
            printf("\n%c%c",f,g);
        }
    }    
    return 0;        
}

char chufa1(char a,char b)
{
    unsigned char n,d;
    n=10*a+b;
    d=n/13;
    return(d);    
}

char chufa2(char a,char b)
{
    unsigned char n,e;
    n=10*a+b;
    e=n%13;
    return(e);    
}

char chufa3(char a,char b,char c)
{
    char n,d;
    n=100*a+10*b+c;
    d=n/13;
    return(d);    
}

char chufa4(char a,char b,char c)
{
    char n,e;
    n=100*a+10*b+c;
    e=n%13;
    return(e);    
}
