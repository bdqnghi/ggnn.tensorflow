
void minus(char a[],char b[]);
void ni(char a[]);
void tranvert(char m,char a[]);
void trans(char n,char m,char b[]);

void main()
{
    char k,i,m,n,a[30][100]={0},b[30][100]={0};
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        scanf("%s",a[i]);    
        scanf("%s",b[i]);    
        m=strlen(a[i]);
        n=strlen(b[i]);//the result at most has m bits
        ni(a[i]);    
        ni(b[i]);
        trans(n,m,b[i]);
        minus(a[i],b[i]);
        tranvert(m,a[i]);    
        ni(a[i]);    
        printf("\n");

    }
    for(i=0;i<k;i++)
    {
        puts(a[i]);
    }
}





void minus(char a[],char b[])
{
    char i,t,m=strlen(a),jin=0;//experimental
    for(i=0;i<=m-1;i++)
    {
        t=a[i]-b[i]-jin;
        if(t>=0) {a[i]=t; jin=0;}
        else {a[i]=t+10; jin=1;}
    }
}

void ni(char a[])
{
    char i,t,m=strlen(a);
    for(i=0;i<m/2;i++)
    {
        t=a[i];
        a[i]=a[m-1-i];
        a[m-1-i]=t;
    }
}

void tranvert(char m,char a[])
{
        char i,j;  //n=strlen(a)
        for(i=m-1;i>=1;i--)
            if(a[i]!=0) break;
        for(j=i;j>=0;j--)
            a[j]+='0';
}

void trans(char n,char m,char b[])// add 0 so that b is as long as a
{    char i;
    for(i=n;i<=m-1;i++)
    b[i]='0';
}