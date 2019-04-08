int reverse(int x)
{
    int a[100]={0};
    int i=0;
    int change=0;
    int temp=0;
    if (x==0) change=0;
    if (x>0)
    {
        temp=x;
        for (i=0;temp>0;i++)
        {
            a[i]=temp%10;
            temp=temp/10;
        }
        int j=0;
        for (j=0;;j++)
        {
            change=change+ a[j]*pow(10.0,i-1);
            i=i-1;
            if (i<0) break;
        }
    }
    if (x<0)
    {
        temp=-x;
         for (;temp>0;i++)
        {
            a[i]=temp%10;
            temp=temp/10;
        }
         int j=0;
        for (j=0;;j++)
        {
            change=change+ a[j]*pow(10.0,i-1);
            i=i-1;
            if (i<0) break;
        }
        change=-change;
    }
return (change);
}
int main()
{
    int b[6]={0};
    int j=0;
    for (j=0;j<6;j++)
    {
        cin >>b[j];
        cout <<reverse(b[j])<<endl;
    }
return 0;
}
