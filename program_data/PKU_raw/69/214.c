
int main()
{
    char a[N],b[N];
    char c[N];
    char t;
    int i,r,x,la,lb;
    for(i=0;i<N;i++)
    {
        a[i]='\0';
        b[i]='\0';
        c[i]='\0';
    }

    gets(a);
    gets(b);

    while(a[0]=='0'&&strlen(a)!=1)
    {
        for(i=0;a[i+1]!='\0';i++)
        {
            a[i]=a[i+1];
        }
        a[i]='\0';
    }
    while(b[0]=='0'&&strlen(b)!=1)
    {
        for(i=0;b[i+1]!='\0';i++)
        {
            b[i]=b[i+1];
        }
        b[i]='\0';
    }

    la=strlen(a);
    for(i=0;i<=la/2.0-1;i++)
    {
        t=a[i];
        a[i]=a[la-i-1];
        a[la-i-1]=t;
    }

    lb=strlen(b);
    for(i=0;i<=lb/2.0-1;i++)
    {
        t=b[i];
        b[i]=b[lb-i-1];
        b[lb-i-1]=t;
    }



    for(i=0;i<((la>=lb)?la:lb);i++)
    {
        if(a[i]=='\0')
            c[i]=c[i]+b[i]-'0';
        else if(b[i]=='\0')
            c[i]=c[i]+a[i]-'0';
        else
            c[i]=c[i]+a[i]-'0'+b[i]-'0';

        //printf("%d %d %d\n",a[i],b[i],c[i]);

        r=i;
        while(c[r]>=10)
        {
            x=c[r];
            c[r]=x%10;
            c[r+1]=(x-c[r])/10;
            r++;
        }
    }

    for(i=0;i<=r;i++)
    {
        c[i]=c[i]+'0';
    }

    for(i=r;i>=0;i--)
    {
        printf("%c",c[i]);
    }
    printf("\n");

    return 0;
}