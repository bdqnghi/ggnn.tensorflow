int main()
{
    char a[100];
    scanf("%s",a);
    int l;
    l=strlen(a);
    char m[100];
    int n,i;
    if(l==1)
    printf("0\n%d\n",a[0]-'0');
    else if(l==2&&a[0]=='1'&&a[1]<='2')
    printf("0\n%d\n",10+a[1]-'0');
    else 
    {
    for(i=0;;i++)
    {
                 if(a[i]=='\0')
                 break;
                 else a[i]=a[i]-'0';
    }
    int c;
    c=a[0];
    for(i=0;i<l-1;i++)
    {
               c=c%13*10+a[i+1];
                m[i]=c/13;
    }
    if(m[0]==0)
    {
               for(i=0;i<l-2;i++)
               m[i]=m[i+1]+'0';
               m[l-2]='\0';
    }
    else 
    {
            for(i=0;i<l-1;i++)
            {
                    m[i]=m[i]+'0';
                    m[l-1]='\0';
             }
    }
    n=c%13;
    printf("%s\n",m);
    printf("%d\n",n);
    }
    getchar();
    getchar();
}
