int isodd(int num)
{
    int i,flag=1;
    if (num%2==0)
    flag=0;
    else
    {
        if (num==3||num==5||num==7)
        flag=1;
        else
        {
          for (i=3;i<=sqrt(num);i=i+2)
          {
            if (num%i==0)
            {
            flag=0;
            break;
            }
          }
        }
    }
    return flag;
}
int main()
{
    int n,i,temp1,temp2;
    scanf("%d",&n);
    for (i=6;i<=n;i=i+2)
    {
        for(temp1=3;temp1<=n/2;temp1=temp1+2)
        {
            if(isodd(temp1))
            {
                temp2=i-temp1;
                if (isodd(temp2))
                {
                    printf("%d=%d+%d\n",i,temp1,temp2);
                    break;
                }
            }
        }
    }
    return 0;
}
