//????????
int main()
{
    char s[10000];
    int len,i,j=0,k=0,t=0;
    int a[10000],b[10000]={0};
    cin >>s;
    len=strlen(s);
    a[0]=len;
    for (i=1;i<=len;i++)
        a[i]=(int)s[i-1] -48;
    if (len==1)
    {
        cout <<a[1]/13<<endl;
        cout <<a[1]%13<<endl;
    }
    else
    if (len==2)
    {
        j=10*a[1]+a[2];
        cout <<j/13<<endl;
        cout <<j%13<<endl;
    }
    else
    {
        j=a[1]*10+a[2];
        i=2;
        k=1;
        while (i<len)
        {
            b[k]=j/13;
            j=j-b[k]*13;
            i++;
            j=j*10+a[i];
            k++;
        }
        b[k]=j/13;
        j=j-b[k]*13;
        t=1;
        while (b[t]==0) t++;
        for (i=t;i<=k;i++)
            cout <<b[i];
        cout <<endl;
        cout <<j<<endl;
    }
    return 0;
}
