int main()
{
    int a[13],n;//n:?????????
    cin>>n;
    int year[n+1],month1[n+1],month2[n+1];
    for(int i=1;i<=n;i++)
    {
            cin>>year[i]>>month1[i]>>month2[i];
    }
    a[1]=31;
    a[3]=31;
    a[4]=30;
    a[5]=31;
    a[6]=30;
    a[7]=31;
    a[8]=31;
    a[9]=30;
    a[10]=31;
    a[11]=30;
    a[12]=31;
    int i=1;
    int k,s1,s2,sum=0;
    for(i=1;i<=n;i++)
    {
                     if(year[i]%4==0&&year[i]%100!=0||year[i]%400==0)
                     a[2]=29;
                     else
                     a[2]=28;
                     if(month1[i]>month2[i])
                     s1=month1[i],s2=month2[i];
                     else
                     s1=month2[i],s2=month1[i];
                     for(k=s2;k<=(s1-1);k++)
                     sum=sum+a[k];
                     if(sum%7==0)
                     cout<<"YES"<<endl;
                     else
                     cout<<"NO"<<endl;
                     sum=0;
    }
    return 0;
}