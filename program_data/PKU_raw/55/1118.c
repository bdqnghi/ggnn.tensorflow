int main()
{
    int m,n,l,i,j,b[65535];
    long t=0,k=1;
    char a[65535];
    scanf("%d %s %d",&m,a,&n);
    l=strlen(a);
    for(i=0;i<l;i++)
       {
           if((a[i]<='9')&&(a[i]>='0'))
               b[i]=a[i]-'0';
           if((a[i]<='z')&&(a[i]>='a'))
               b[i]=a[i]-'a'+10;
           if((a[i]<='Z')&&(a[i]>='A'))
               b[i]=a[i]-'A'+10;
       }
    for(i=0;i<l;i++)
        {
            t=t+b[i]*pow(m,l-i-1);
        }
    if(t==0)
        printf("%d",t);
    j=0;
    while(t!=0)
        {
            b[j]=t%n;
            t=t/n;
            j++;
        }
    for(i=0;i<j;i++)
        {
            if(b[i]<=9)
                a[j-1-i]='0'+b[i];
            else
                a[j-1-i]='A'+b[i]-10;
        }
    a[j]='\0';
    printf("%s",a);
    getchar();
    getchar();
} 
