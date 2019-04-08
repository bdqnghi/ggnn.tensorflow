int main()
{
    char a[100000]={0},b[100000]={0};
    int i,n=0,ta,tb;
    scanf("%d ",&ta);
    scanf("%s",a);
    scanf("%d",&tb);
    
    for(i=0;i<strlen(a);i++)
        if(a[i]>=97&&a[i]<=122)
            a[i]-=32;
    
    for(i=0;i<strlen(a);i++)//?????????n?
    {
        if(a[i]>=65&&a[i]<=90)
            n=ta*n+(a[i]-55);
        else  n=ta*n+(a[i]-48);
    }
    //printf("%d\n",n);
    
    if(n==0) printf("0");
    else  for(i=0;n>0;i++)  //
    {
        if(n%tb<10)
           b[i]=n%tb+48;
        else b[i]=n%tb+55;
        n=n/tb;
    }
        
        for(i=strlen(b)-1;i>=0;i--)
            printf("%c",b[i]);
        return 0;
}
