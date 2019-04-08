
int main()
{
    char a[250+1],b[250+1],c[251+1]={'\0'};
    int i;
    int n1=0,n2=0;//n1,n2???????0??
    cin>>a;
    cin>>b;

    int l1=strlen(a)/sizeof(char),
        l2=strlen(b)/sizeof(char);
    c[l1]='0';c[l2]='0';//???????????0 ????????1

    for(i=0;i<l1-1;i++)
    {
        if(a[i]!=48)break;
        a[i]='\0';n1++;
    }
    for(i=0;i<l2-1;i++)
    {
        if(b[i]!=48)break;
        b[i]='\0';n2++;
    }

    for(i=0;i<l1/2;i++)
    {
        int temp;
        temp=a[i];a[i]=a[l1-1-i];a[l1-1-i]=temp;
    }
    for(i=0;i<l2/2;i++)
    {
        int temp;
        temp=b[i];b[i]=b[l2-1-i];b[l2-1-i]=temp;
    }
    l1=l1-n1;l2=l2-n2;//?????????????0????
//////////////////////////?????? ????
    int max=l1;
    if(l1>l2)
    {
        max=l1;
        for(i=l2;i<l1;i++)
        b[i]='0';
    }
    if(l1<l2)
    {
        max=l2;
        for(i=l1;i<l2;i++)
        a[i]='0';
    }
//////////////////////////???????0 ?2?????? ????
    for(i=0;i<=max;i++)
    c[i]='0';
    for(i=0;i<max;i++)
    {
        if(a[i]-48+b[i]-48+c[i]-48<10)//???
        c[i]=a[i]-48+b[i]-48+c[i]-48+48;
        else//???
        {
            c[i]=a[i]-48+b[i]-48+c[i]-48-10+48;
            c[i+1]='1';
        }
    }
//////////////////////////??
    if(c[max]=='1')//???????1 ????????1 ???
    {
        cout<<1;
        for(i=max-1;i>=0;i--)
        cout<<c[i];
    }
    else//????????1 ?????
    {
        for(i=max-1;i>=0;i--)
        cout<<c[i];
    }
    cout<<endl;
//////////////////////////??

    return 0;
}
