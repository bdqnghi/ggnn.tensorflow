int main()
{
    int a=0,b=0;//a,b???????
    char m[32];//m?????b???
    char n[32];//n????a???
    int i=1;//i?????
    long sum=0;//sum?????????
    cin>>a;
    n[0]=getchar();//????????
    while((n[i]=getchar())!=' ')
    {
        if(n[i]>47&&n[i]<58)//????ASCII??????
        n[i]-=48;
        else if(n[i]>64&&n[i]<91)
        n[i]-=55;
        else if(n[i]>96&&n[i]<123)
        n[i]-=87;
        sum=a*sum+n[i];//?a??????????
        i++;
    }
    cin>>b;
    i=0;
    do
    {
        m[i]=sum%b;
        if(m[i]>=0&&m[i]<=9)
        m[i]+=48;
        else if(m[i]>9&&m[i]<36)
        m[i]+=55;
        sum=sum/b;
        i++;
    }while(sum!=0);
    for(int j=i-1;j>=0;j--)
    cout<<m[j];
    return 0;
}
