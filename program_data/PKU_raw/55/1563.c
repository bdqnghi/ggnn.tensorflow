
int main()
{
    int a,b;
    char n[N];
    int i,j,t,l;
    int sum=0;

    scanf("%d %s %d",&a,n,&b);


    l=strlen(n);
    for(i=0;i<=l/2-1;i++)
    {
        t=n[i];
        n[i]=n[l-i-1];
        n[l-i-1]=t;
    }

    //puts(n);

    for(i=0;i<l;i++)
    {
        if(n[i]>='0'&&n[i]<='9')
            t=n[i]-'0';
        else if(n[i]>='A'&&n[i]<='Z')
            t=n[i]-'A'+10;
        else if(n[i]>='a'&&n[i]<='z')
            t=n[i]-'a'+10;

        for(j=1;j<=i;j++)
        {
            t=t*a;
        }

        sum=sum+t;
    }
    for(i=0;i<N;i++)
        n[i]='\0';

    for(i=0;sum>=b;i++)
    {
        n[i]=sum%b;
        sum=(sum-sum%b)/b;

        if(n[i]<10)
        {
            n[i]=n[i]+'0';
        }
        else if(n[i]>=10)
        {
            n[i]=n[i]-10+'A';
        }
    }
    if(sum<10)
    {
        n[i]=sum+'0';
    }
    else if(sum>=10)
    {
        n[i]=sum-10+'A';
    }

    l=strlen(n);

    for(i=l-1;i>=0;i--)
        printf("%c",n[i]);

    return 0;
}