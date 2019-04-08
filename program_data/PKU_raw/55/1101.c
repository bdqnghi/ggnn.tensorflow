int main()
{
    int a,b,c,sum,i,k,l;
    char n[40];
    scanf("%d %s %d",&a,n,&b);
    l=strlen(n);
    if(n[0]=='0') 
       printf("0\n");
    else
    {
        for(i=0,sum=0;i<l;i++)
        {
            if(n[i]>='a' && n[i]<='z')
               c=n[i]-'a'+10;
            if(n[i]>='A' && n[i]<='Z')
               c=n[i]-'A'+10;
            if(n[i]>='0' && n[i]<='9') 
               c=n[i]-'0';
            sum=c+sum*a;
        }
        char d[40];
        for(k=0;sum!=0;k++)
        {
            d[k]=sum%b;
            sum=sum/b;
        }
        d[k]='\0';
        char e[40];
        for(i=0;i<k;i++)
        {
            if(d[i]<10)
               e[k-1-i]=d[i]+'0';
            else
               e[k-1-i]=d[i]-10+'A';     
        }
        e[k]='\0';
        printf("%s",e);
    }
    getchar();
    getchar();
}

