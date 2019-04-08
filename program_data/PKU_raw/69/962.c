int main()
{
    char str1[300],str2[300];
    cin.getline(str1,300);
    cin.getline(str2,300);
    int a[300]={0},a1[300]={0},a2[300]={0},t1,t2;
    t1=strlen(str1);
    t2=strlen(str2);
    for(int i=0;i<t1;i++)
    a1[t1-1-i]=(int)(str1[i]-'0');
    for(int i=0;i<t2;i++)
    a2[t2-1-i]=(int)(str2[i]-'0');
    for(int i=0;i<300;i++)
    {
        a[i]=a1[i]+a2[i];
    }
    for(int i=0;i<299;i++)
    {
        a[i+1]+=a[i]/10;
        a[i]=a[i]%10;
    }
    int j;
    for(j=299;j>=0;j--)
    {
        if(a[j]!=0)
        break;
    }
    if(j==-1)
    cout<<a[0]<<endl;
    else
    {
    for(int i=j;i>=0;i--)
    cout<<a[i];
    cout<<endl;
    }
    
    return 0;
}
